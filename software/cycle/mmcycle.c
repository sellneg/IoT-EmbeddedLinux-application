#define _POSIX_C_SOURCE 199309L

/* Includes */
#include <time.h>
#include <sys/time.h>           /* Time functions */

#include <mysql.h>
#include <unistd.h>             /* Symbolic Constants */

#include <sys/types.h>          /* Primitive System Data Types */
#include <errno.h>              /* Errors */
#include <stdio.h>              /* Input/Output */
#include <stdlib.h>             /* General Utilities */
#include <pthread.h>            /* POSIX Threads */
#include <string.h>             /* String handling */

#include <libsoc_gpio.h>        /* GPIO library */
#include <hiredis/hiredis.h>    /* redis database library */
#include "redis_lua.h"          /* lua scripts for redis  */
/**
 *
 * This gpio_test is intended to be run on BeagleBone
 * and reads pin P8_12 (gpio44) and pin P8_11 (gpio45)
 *
 * The GPIO_OUTPUT and INPUT defines can be changed to support any two pins.
 *
 */
#define GPIO_INPUT_A  44
#define GPIO_INPUT_B  45

/*
 * Injection Molding Machine Status
 */
 #define IMM_OFF        0
 #define IMM_IDLE       1
 #define IMM_RUN        2
 #define IMM_DRYCYCLE   3
 #define SM_STARTUP     4

/*
 * Cycle Type
 */
 #define CYCLETYPE_NORMAL  0
 #define CYCLETYPE_SHORT   3
 #define CYCLETYPE_LONG    1

/*
 * Old
 */
 #define IDLE_TIMEOUT 300     // 5 minutes in seconds

/* prototype for thread routine */
void print_message_function ( void *ptr );

typedef struct strc_machine_status
{
  int intMachineStatus;
  int intEi3MachineStatus;
  int intPrevMachineStatus;
} machine_status;

/* Get Machine Status */
int machineStatus(redisContext *rdbContext) {
  redisReply *rdbReply;
  rdbReply = redisCommand(rdbContext, "EXISTS keyMachineStatus");
  if(rdbReply->integer == 1)
  {
    freeReplyObject(rdbReply);
    return(IMM_RUN);
  }
  else
  {
    freeReplyObject(rdbReply);
    return(IMM_IDLE);
  }
}

/*
**        MySQL
*/
void finish_with_error(MYSQL *con) {
  fprintf(stderr, "%s\n",
  mysql_error(con));
  mysql_close(con);
  exit(1);
  /* should change this to log failr and continue */
}

int push_MySQL(redisContext *rdbContext, machine_status *dataRunStatus) {
  redisReply *rdbReply;
  struct timespec tvalTimeStamp;
  struct tm tmTimeStamp;
  char chaTimeStamp[25];
  char chaTCSec[15];
  char chaTCuSec[15];
  char chaCycleTime[25];
  char chaCycleCount[25];
  char sqlCommand[200];
  char chaCycleMin[25];
  char chaCycleMax[25];
  char chaCycleMean[25];
  char chaProcMean[25];
  char chaProcTime[25];

  MYSQL *con = mysql_init(NULL);

  if (con == NULL) {
    fprintf(stderr, "mysql_init() failed\n");
    exit(1);
  }
  if (mysql_real_connect(con, "localhost", "root", "root","dbSmartMold", 0, NULL, 0) == NULL) {
    finish_with_error(con);
  }

  dataRunStatus->intEi3MachineStatus = 0;
  if (dataRunStatus->intMachineStatus == IMM_RUN) dataRunStatus->intEi3MachineStatus = 1;

  /* Read Timestamp saved in Redis */
  rdbReply = redisCommand(rdbContext, "HGET %s tv_sec", "hashCycleData");
  strcpy(chaTCSec,rdbReply->str);
  freeReplyObject(rdbReply);
  rdbReply = redisCommand(rdbContext, "HGET %s tv_nsec", "hashCycleData");
  strcpy(chaTCuSec,rdbReply->str);
  freeReplyObject(rdbReply);
  tvalTimeStamp.tv_sec = atol(chaTCSec);
  tvalTimeStamp.tv_nsec = atol(chaTCuSec);
  memcpy(&tmTimeStamp, gmtime(&tvalTimeStamp.tv_sec), sizeof(struct tm));
  strftime(chaTimeStamp, 25, "%Y-%m-%d %H:%M:%S", &tmTimeStamp);

  rdbReply = redisCommand(rdbContext, "HGET %s cycle_time", "hashCycleData");
  freeReplyObject(rdbReply);
  rdbReply = redisCommand(rdbContext, "HGET %s current", "hashCycleStats");
  strcpy(chaCycleTime,rdbReply->str);
  freeReplyObject(rdbReply);
  rdbReply = redisCommand(rdbContext, "HGET %s mean", "hashCycleStats");
  strcpy(chaCycleMean,rdbReply->str);
  freeReplyObject(rdbReply);
  rdbReply = redisCommand(rdbContext, "HGET %s count", "hashCycleStats");
  strcpy(chaCycleCount,rdbReply->str);
  freeReplyObject(rdbReply);
  rdbReply = redisCommand(rdbContext, "HGET %s min", "hashCycleStats");
  strcpy(chaCycleMin,rdbReply->str);
  freeReplyObject(rdbReply);
  rdbReply = redisCommand(rdbContext, "HGET %s max", "hashCycleStats");
  strcpy(chaCycleMax,rdbReply->str);
  freeReplyObject(rdbReply);
  rdbReply = redisCommand(rdbContext, "HGET %s mean", "hashClampStats");
  strcpy(chaProcMean,rdbReply->str);
  freeReplyObject(rdbReply);
  rdbReply = redisCommand(rdbContext, "HGET %s current", "hashClampStats");
  strcpy(chaProcTime,rdbReply->str);
  freeReplyObject(rdbReply);

  // What to do here to redusce # of entries?
  if ((dataRunStatus->intMachineStatus == IMM_IDLE) & (dataRunStatus->intMachineStatus != dataRunStatus->intPrevMachineStatus))
  {
    sprintf(sqlCommand,"INSERT INTO tblCycle(datTimeStamp,sngCycleTime,intCycleCount,strFileName, intMode, intCycleType, sngProcessTime) VALUES('%s',%s,%s,'',%d,0,%s)",
      chaTimeStamp,chaCycleTime,chaCycleCount,dataRunStatus->intMachineStatus,chaProcTime);
    if (mysql_query(con,sqlCommand))
    {
      finish_with_error(con);
    }
    dataRunStatus->intPrevMachineStatus = dataRunStatus->intMachineStatus;
  }
  if (dataRunStatus->intMachineStatus == IMM_RUN)
  {
    sprintf(sqlCommand,"INSERT INTO tblCycle(datTimeStamp,sngCycleTime,intCycleCount,strFileName, intMode, intCycleType, sngProcessTime) VALUES('%s',%s,%s,'',%d,0,%s)",
      chaTimeStamp,chaCycleTime,chaCycleCount,dataRunStatus->intMachineStatus,chaProcTime);
    if (mysql_query(con,sqlCommand))
    {
      finish_with_error(con);
    }
    dataRunStatus->intPrevMachineStatus = dataRunStatus->intMachineStatus;
  }

  sprintf(sqlCommand,"UPDATE tblSummary SET intCycleCount = %ld LIMIT 1",atol(chaCycleCount));
  if (mysql_query(con,sqlCommand)) finish_with_error(con);
  sprintf(sqlCommand,"UPDATE tblSummary SET sngCycleTimeMin = %6f LIMIT 1",atof(chaCycleMin));
  if (mysql_query(con,sqlCommand)) finish_with_error(con);
  sprintf(sqlCommand,"UPDATE tblSummary SET sngCycleTimeMax = %6f LIMIT 1",atof(chaCycleMax));
  if (mysql_query(con,sqlCommand)) finish_with_error(con);
  sprintf(sqlCommand,"UPDATE tblSummary SET sngCycleTimeAvg = %6f LIMIT 1",atof(chaCycleMean));
  if (mysql_query(con,sqlCommand)) finish_with_error(con);
  sprintf(sqlCommand,"UPDATE tblSummary SET sngLastCycleTime = %6f LIMIT 1",atof(chaCycleTime));
  if (mysql_query(con,sqlCommand)) finish_with_error(con);

  sprintf(sqlCommand,"UPDATE tblSummary SET datLastUpdated = '%s' LIMIT 1",chaTimeStamp);
  if (mysql_query(con,sqlCommand)) finish_with_error(con);

  sprintf(sqlCommand,"UPDATE tblSummary SET intMachineState = %d LIMIT 1",dataRunStatus->intEi3MachineStatus);
  if (mysql_query(con,sqlCommand)) finish_with_error(con);

  if (dataRunStatus->intMachineStatus == IMM_RUN) {
    sprintf(sqlCommand,"UPDATE dbSmartMold.tblPMRequired SET intAtInterval = intAtInterval + 1 WHERE intComplete = 0");
    if (mysql_query(con,sqlCommand)) finish_with_error(con);
  };

  mysql_close(con);
  //printf("SQL ok\n");
  return 0;
}

/* struct to hold data to be passed to a thread
   this shows how multiple data items can be passed to a thread */
typedef struct str_thdata
{
    int thread_no;
    int pin_no;
    char message[100];
    gpio *gpio_pin;
    int return_value;
    struct timespec tvalTimeStamp;
    redisContext *rdbContext;
    redisReply *rdbReply;
    int gpioValue;
} thdata;

/* struct to hold data to be passed to a cycle list processing */
typedef struct str_cycledata
{
  struct timeval tvalTimeStamp;
  float fMoldClosedSeconds;
  float fMoldCycleSeconds;
} cycle_data;

typedef struct str_switchdata
{
  int pin_no;
  int iSwitchPosition;
  struct timeval tvalTimeStamp;
} switch_data;

typedef struct str_switch_edges_counts
{
  long ilUp;
  long ilDown;
} edge_count_data;

typedef struct str_cycleproc
{
  edge_count_data countsSwitch;
  struct timeval tvalTimeStamp;
  redisContext *rdbContext;
  redisReply *rdbReply;
  switch_data sdataThisLine;
  int iFirstRisingEdge;
  int iFirstFallingEdge;
  machine_status RunStatus;
  int timeoutsec;
} cycle_aggregator_data;

int init_redis_scripts(cycle_aggregator_data *ptrCycleData) {
  int iScriptThere;
  /* Is Script already cached */
  ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext,"SCRIPT EXISTS %s", statsscript_lua_SHA1);
  iScriptThere = ptrCycleData->rdbReply->integer;
  freeReplyObject(ptrCycleData->rdbReply);
  if (iScriptThere == 0)
  {
     /* not cached, so load 'er up */
     ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext,"SCRIPT LOAD %s", statsscript_lua);
     if ( ptrCycleData->rdbReply->type == REDIS_REPLY_ERROR )
       printf( "Error: %s\n", ptrCycleData->rdbReply->str );
     freeReplyObject(ptrCycleData->rdbReply);
  }
  return 0;
}

int parse_listentry(char *pch,cycle_aggregator_data *ptrCycleData) {
  char chaToParse[50];
  char chaValue[2];
  char chaGPIONo[2];
  char chaTCsec[15];
  char chaTCusec[10];
  int iIndex;

  strcpy(chaToParse, pch);
  for (iIndex = 0; iIndex < strlen(chaToParse); iIndex++) {
    if (chaToParse[iIndex] == ',') chaToParse[iIndex] = ' ';
  }
  sscanf (chaToParse,"%s %s %s %s",chaTCsec, chaTCusec, chaGPIONo, chaValue);
  /*
  printf("GPIO pin=%s/%s\n", chaGPIONo, chaValue);
  */
  ptrCycleData->sdataThisLine.pin_no = atoi(chaGPIONo);
  ptrCycleData->sdataThisLine.iSwitchPosition = atoi(chaValue);
  ptrCycleData->sdataThisLine.tvalTimeStamp.tv_sec = atol(chaTCsec);
  ptrCycleData->sdataThisLine.tvalTimeStamp.tv_usec = atol(chaTCusec);

  return(0);
}

int  get_item_count(redisContext *rdbContext, char *pszListName) {
  redisReply *rdbReply;
  int iReturnValue;

  rdbReply = redisCommand(rdbContext,"LLEN %s", pszListName);
  // printf("List Name = %s\n", pszListName);
  if ( rdbReply->type == REDIS_REPLY_ERROR )
  {
    iReturnValue = 0;
    printf("REDIS Error = %s\n", rdbReply->str);
  } else {
    iReturnValue = rdbReply->integer;
    // printf("Items = %lld\n", rdbReply->integer);
  }
  freeReplyObject(rdbReply);

  return(iReturnValue);
}

/********************************************************************

*********************************************************************/ 
int  pop_list_item(redisContext *rdbContext, char *pszListName,char *pszBackListName, char *pszItem) {
  redisReply *rdbReply;
  int iReturnValue;

  /* pops off list and copies to audit list, returns data */
  rdbReply = redisCommand(rdbContext,"LPOP %s", pszListName);
  if ( rdbReply->type == REDIS_REPLY_ERROR )
  {
    iReturnValue = 0;
    freeReplyObject(rdbReply);
  } else {
    iReturnValue = 0;
    strcpy(pszItem, rdbReply->str);
    freeReplyObject(rdbReply);
    rdbReply = redisCommand(rdbContext,"RPUSH %s %s", pszBackListName, pszItem);
    if ( rdbReply->type == REDIS_REPLY_ERROR )
      iReturnValue = 0;
    else
      iReturnValue = 0;
    freeReplyObject(rdbReply);
    rdbReply = redisCommand(rdbContext, "EXISTS keyMachineStatus");
    if(rdbReply->integer == 1)
    {
      freeReplyObject(rdbReply);
      rdbReply = redisCommand(rdbContext, "EXPIRE keyMachineStatus %d",120);
    }
    else
    {
      freeReplyObject(rdbReply);
      rdbReply = redisCommand(rdbContext, "SET keyMachineStatus %d",1);
      freeReplyObject(rdbReply);
      rdbReply = redisCommand(rdbContext, "EXPIRE keyMachineStatus %d",120);
    }
    freeReplyObject(rdbReply);
  }
  return(iReturnValue);
}

/********************************************************************
  Process List of GPIO Events

   This is the culprit causing the negative cycle time issue
   Don't know what to do to fix yet, but definitely needs to be 
   simplified and built as state machine maybe

*********************************************************************/
int proc_list(cycle_aggregator_data *ptrCycleData) {
  char chaTemp[50];
  int iItem, iItemCount;
  float fMoldClosedSeconds;
  float fMoldCycleSeconds;
  long ilTemp_sec, ilTemp_usec;
  struct timeval tvalNow;

  /* Let's check what we have inside the list */
  iItemCount = get_item_count(ptrCycleData->rdbContext, "listCycleGPIO");
  // printf("Item Count = %d\n", iItemCount);
  if (iItemCount >= 1) {
    // PROC_BEGIN Process Entries if available
    for (iItem = 0; iItem < iItemCount; iItem++) {
      pop_list_item(ptrCycleData->rdbContext, "listCycleGPIO", "listHistoryGPIO", chaTemp);
//      printf("String = %s\n", chaTemp);
      parse_listentry(chaTemp,ptrCycleData);
      // TOP_BEGIN process entries for top switch only
      if (ptrCycleData->sdataThisLine.pin_no == GPIO_INPUT_B) {
        // (FALLING)RISING_BEGIN Process case rising edge
        if (ptrCycleData->sdataThisLine.iSwitchPosition == 0) {
          // FIRST_BEGIN case where first cycle
          if (ptrCycleData->iFirstFallingEdge == 1)
          {
            ptrCycleData->iFirstFallingEdge = 0;
            // save timestamped data to hash
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HMSET %s tv_sec %ld tv_usec %ld", "hashCycleSwitchFallingEdge",ptrCycleData->sdataThisLine.tvalTimeStamp.tv_sec,ptrCycleData->sdataThisLine.tvalTimeStamp.tv_usec);
            freeReplyObject(ptrCycleData->rdbReply);
            // initialize cycle hash with timestamp but zeros for cycle and closed times
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HMSET %s tv_sec %ld tv_usec %ld cycle_time %f clamp_time %f", "hashCycleData",ptrCycleData->sdataThisLine.tvalTimeStamp.tv_sec,ptrCycleData->sdataThisLine.tvalTimeStamp.tv_usec,0.0,0.0);
            freeReplyObject(ptrCycleData->rdbReply);
          }
          // FIRST_END
          else
          // NORMAL_BEGIN
          {
            // Get data for last falling edge
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HGET hashCycleSwitchFallingEdge tv_sec");
            ilTemp_sec = atol(ptrCycleData->rdbReply->str);
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HGET hashCycleSwitchFallingEdge tv_usec");
            ilTemp_usec = atol(ptrCycleData->rdbReply->str);
            freeReplyObject(ptrCycleData->rdbReply);
            fMoldCycleSeconds = ((((ptrCycleData->sdataThisLine.tvalTimeStamp.tv_sec-ilTemp_sec)*1000000)+ptrCycleData->sdataThisLine.tvalTimeStamp.tv_usec)-ilTemp_usec)/1000000.000;
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HSET %s cycle_time %f", "hashCycleData",fMoldCycleSeconds);
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "EVALSHA %s 1 %s %f", statsscript_lua_SHA1,"hashCycleStats",fMoldCycleSeconds);
            if ( ptrCycleData->rdbReply->type == REDIS_REPLY_ERROR )
                  printf( "Error: %s\n", ptrCycleData->rdbReply->str );
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HMSET %s tv_sec %ld tv_usec %ld", "hashCycleSwitchFallingEdge",ptrCycleData->sdataThisLine.tvalTimeStamp.tv_sec,ptrCycleData->sdataThisLine.tvalTimeStamp.tv_usec);
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HGET hashCycleData tv_sec");
            ilTemp_sec = atol(ptrCycleData->rdbReply->str);
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HGET hashCycleSwitchRisingEdge tv_usec");
            ilTemp_usec = atol(ptrCycleData->rdbReply->str);
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HGET hashCycleData cycle_time");
            fMoldCycleSeconds = atof(ptrCycleData->rdbReply->str);
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HGET hashCycleData clamp_time");
            fMoldClosedSeconds = atof(ptrCycleData->rdbReply->str);
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext,
                  "RPUSH listCycle %ld,%ld,%f,%f",ilTemp_sec,ilTemp_usec,fMoldCycleSeconds,fMoldClosedSeconds);
            freeReplyObject(ptrCycleData->rdbReply);
            // Post to MySQL dbSmartMold tblCycle

            push_MySQL(ptrCycleData->rdbContext, &ptrCycleData->RunStatus);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HMSET %s tv_sec %ld tv_usec %ld cycle_time %f clamp_time %f", "hashCycleData",ptrCycleData->sdataThisLine.tvalTimeStamp.tv_sec,ptrCycleData->sdataThisLine.tvalTimeStamp.tv_usec,0.0,0.0);
            freeReplyObject(ptrCycleData->rdbReply);
          }
          // NORMAL_END
        }
        if (ptrCycleData->sdataThisLine.iSwitchPosition == 1) {
          // RISING_BEGIN process risinging edge

          // Is there already a rising edge detected?
          if (ptrCycleData->iFirstFallingEdge == 1)
          {
            fMoldClosedSeconds = 0.0;
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "EVALSHA %s 1 %s %f",statsscript_lua_SHA1, "hashClampStats", fMoldClosedSeconds);
            if ( ptrCycleData->rdbReply->type == REDIS_REPLY_ERROR )
              printf( "Error: %s\n", ptrCycleData->rdbReply->str );
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HSET %s clamp_time %f", "hashCycleData",fMoldClosedSeconds);
            freeReplyObject(ptrCycleData->rdbReply);
          }
          else
          {
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HGET hashCycleSwitchFallingEdge tv_sec");
            ilTemp_sec = atol(ptrCycleData->rdbReply->str);
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HGET hashCycleSwitchFallingEdge tv_usec");
            ilTemp_usec = atol(ptrCycleData->rdbReply->str);
            freeReplyObject(ptrCycleData->rdbReply);
            fMoldClosedSeconds = ((((ptrCycleData->sdataThisLine.tvalTimeStamp.tv_sec-ilTemp_sec)*1000000)+ptrCycleData->sdataThisLine.tvalTimeStamp.tv_usec)-ilTemp_usec)/1000000.000;
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "EVALSHA %s 1 %s %f",statsscript_lua_SHA1, "hashClampStats", fMoldClosedSeconds);
            if ( ptrCycleData->rdbReply->type == REDIS_REPLY_ERROR )
              printf( "Error: %s\n", ptrCycleData->rdbReply->str );
            freeReplyObject(ptrCycleData->rdbReply);
            ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "HSET %s clamp_time %f", "hashCycleData",fMoldClosedSeconds);
            freeReplyObject(ptrCycleData->rdbReply);
          }
        }
        // RISING_END
      }
      // TOP_END
    }
    // PROC_END

  } else {
    // Check if machine Idle
    if(machineStatus(ptrCycleData->rdbContext) == IMM_IDLE)
    {
      ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "EXISTS keyPlaceHolderCycle");
      if(ptrCycleData->rdbReply->integer == 1)
      {
        freeReplyObject(ptrCycleData->rdbReply);
        // Sit tight, wait for record to expire
      }
      else
      {
        // Expired or never existed
        freeReplyObject(ptrCycleData->rdbReply);
        // Create
        ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "SET keyPlaceHolderCycle %d",1);
        freeReplyObject(ptrCycleData->rdbReply);
        ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext, "EXPIRE keyPlaceHolderCycle %d",300);
        freeReplyObject(ptrCycleData->rdbReply);
        // Write place-holder record to SQL
        push_MySQL(ptrCycleData->rdbContext,&ptrCycleData->RunStatus);
      }
    }
  }
  /****************************************************************************/
  /* added 2018-03-21 to track Downtime status for reason code function in UI */
  gettimeofday(&tvalNow, NULL);
  ptrCycleData->RunStatus.intMachineStatus = machineStatus(ptrCycleData->rdbContext);
  ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext,
                "HMSET %s %s %ld %s %ld",
                "Cycle.Status",
                "MachineTimestamp",
                tvalNow.tv_sec,
                "MachineStatus",
                ptrCycleData->RunStatus.intMachineStatus);
  freeReplyObject(ptrCycleData->rdbReply);
  ptrCycleData->rdbReply = redisCommand(ptrCycleData->rdbContext,
                "RPUSH Cycle.listStatusLog %ld,%ld",
                tvalNow.tv_sec,
                ptrCycleData->RunStatus.intMachineStatus);
  if ( ptrCycleData->rdbReply->type == REDIS_REPLY_ERROR )
    printf( "Error: %s\n", ptrCycleData->rdbReply->str );
  freeReplyObject(ptrCycleData->rdbReply);
  /* end of new code                                                          */
  /****************************************************************************/
  return 0;
}

/******************************************************************************
*             MAIN
******************************************************************************/
int main()
{
    pthread_t thread1, thread2;  /* thread variables */
    thdata data1, data2;         /* structs to be passed to threads */
    cycle_aggregator_data dataCycle;
    struct timeval tvalNow;
    struct timespec ts_current;


    /* Added to try and clean-up data recording in Cycle table */
    /* Will also make sure last cycle is recorded properly */
    dataCycle.RunStatus.intMachineStatus = IMM_OFF;
    dataCycle.RunStatus.intEi3MachineStatus = 0;
    dataCycle.RunStatus.intPrevMachineStatus = IMM_OFF;
    /* moved here so that can be used for initialization */
    gettimeofday(&tvalNow, NULL);
    clock_gettime(CLOCK_MONOTONIC, &ts_current);

    /*****/

    dataCycle.rdbContext = redisConnect("127.0.0.1", 6379);
    if (dataCycle.rdbContext->err) {
       printf("Error: %s\n", dataCycle.rdbContext->errstr);
    }else{
//       printf("Connection Made! \n");
    }

    init_redis_scripts(&dataCycle);

    dataCycle.rdbReply = redisCommand(dataCycle.rdbContext, "DEL %s",
                          "keyMachineStatus");
    freeReplyObject(dataCycle.rdbReply);    
    dataCycle.rdbReply = redisCommand(dataCycle.rdbContext, "DEL %s",
                          "keyPlaceHolderCycle");
    freeReplyObject(dataCycle.rdbReply);    

    dataCycle.rdbReply = redisCommand(dataCycle.rdbContext,
                                      "HMSET %s tv_sec %ld tv_nsec %ld",
                                      "hashCycleSwitchRisingEdge",
                                      ts_current.tv_sec,
                                      ts_current.tv_nsec);
    freeReplyObject(dataCycle.rdbReply);
    dataCycle.rdbReply = redisCommand(dataCycle.rdbContext,
                                      "HMSET %s tv_sec %ld tv_nsec %ld",
                                      "hashCycleSwitchFallingEdge",
                                      ts_current.tv_sec,
                                      ts_current.tv_nsec);
    freeReplyObject(dataCycle.rdbReply);
    dataCycle.rdbReply = redisCommand(dataCycle.rdbContext,
                                      "HMSET %s tv_sec %ld tv_nsec %ld cycle_time %f clamp_time %f",
                                      "hashCycleData",
                                      ts_current.tv_sec,
                                      ts_current.tv_nsec,
                                      0.0,0.0);
    freeReplyObject(dataCycle.rdbReply);

    
    dataCycle.rdbReply = redisCommand(dataCycle.rdbContext,
              "RPUSH Cycle.listStatusLog %ld,%ld",
              tvalNow.tv_sec,
              SM_STARTUP);
    if ( dataCycle.rdbReply->type == REDIS_REPLY_ERROR )
          printf( "Error: %s\n", dataCycle.rdbReply->str );
    freeReplyObject(dataCycle.rdbReply);

    /*****/

    /* initialize data to pass to thread 1 */
    data1.thread_no = 1;
    data1.pin_no = GPIO_INPUT_A;
    strcpy(data1.message, "gpio44");
    // Request gpios
    data1.gpio_pin = libsoc_gpio_request(GPIO_INPUT_A, LS_SHARED);
    // Set direction to INPUT
    libsoc_gpio_set_direction(data1.gpio_pin, INPUT);
    // Set edge to BOTH
    libsoc_gpio_set_edge(data1.gpio_pin, BOTH);
    // In-Memory Database local connection
    data1.rdbContext = redisConnect("127.0.0.1", 6379);
    if (data1.rdbContext->err) {
       printf("Error: %s\n", data1.rdbContext->errstr);
    }else{
//       printf("Connection Made! \n");
    }

    /* initialize data to pass to thread 2 */
    data2.thread_no = 2;
    data2.pin_no = GPIO_INPUT_B;
    strcpy(data2.message, "gpio45");
    data2.gpio_pin = libsoc_gpio_request(GPIO_INPUT_B, LS_SHARED);
    // Set direction to INPUT
    libsoc_gpio_set_direction(data2.gpio_pin, INPUT);
    // Set edge to BOTH
    libsoc_gpio_set_edge(data2.gpio_pin, BOTH);
    // In-Memory Database local connection
    data2.rdbContext = redisConnect("127.0.0.1", 6379);
    if (data2.rdbContext->err) {
       printf("Error: %s\n", data2.rdbContext->errstr);
    }else{
//       printf("Connection Made! \n");
    }

    /* create threads 1 and 2 */
    pthread_create (&thread1, NULL, (void *) &print_message_function, (void *) &data1);
    pthread_create (&thread2, NULL, (void *) &print_message_function, (void *) &data2);

    printf("smartmold starting\n");

    dataCycle.iFirstRisingEdge = 1;
    dataCycle.iFirstFallingEdge = 1;

    for (;;) {
      dataCycle.rdbReply = redisCommand(dataCycle.rdbContext, "HGET %s target_cycle", "Cycle.hashExpected");
      dataCycle.timeoutsec = atol(dataCycle.rdbReply->str) * 1.5;
      freeReplyObject(dataCycle.rdbReply);
      sleep(1);
      proc_list(&dataCycle);
    }

    /* Main block now waits for both threads to terminate, before it exits
       If main block exits, both threads exit, even if the threads have not
       finished their work */
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Clean up
    proc_list(&dataCycle);
    // If gpio_request was successful
    if (data1.gpio_pin) { // Free gpio request memory
      libsoc_gpio_free(data1.gpio_pin);
    }
    // If gpio_request was successful
    if (data2.gpio_pin) { // Free gpio request memory
      libsoc_gpio_free(data2.gpio_pin);
    }

    /* exit */
    exit(0);
} /* main() */

/**
 * print_message_function is used as the start routine for the threads used
 * it accepts a void pointer
**/
void print_message_function ( void *ptr )
{
    thdata *data;
    data = (thdata *) ptr;  /* type cast to a pointer to thdata */

    /* do the work */
    for(;;) {
      data->return_value = libsoc_gpio_wait_interrupt(data->gpio_pin, -1);
      if (data->return_value == LS_INT_TRIGGERED)
      {
        /* gettimeofday(&data->tvalTimeStamp, NULL);   */
        clock_gettime(CLOCK_MONOTONIC, &data->tvalTimeStamp);
        data->gpioValue = libsoc_gpio_get_level(data->gpio_pin);
        data->rdbReply = redisCommand(data->rdbContext,
              "RPUSH listCycleGPIO %ld,%ld,%d,%d",
              data->tvalTimeStamp.tv_sec,
              data->tvalTimeStamp.tv_nsec,
              data->pin_no,
              data->gpioValue);
        if ( data->rdbReply->type == REDIS_REPLY_ERROR )
          printf( "Error: %s\n", data->rdbReply->str );
        freeReplyObject(data->rdbReply);
        switch(data->pin_no) {
          case GPIO_INPUT_A :  /* GPIO 44 */
              data->rdbReply = redisCommand(data->rdbContext,
                "HMSET %s tv_sec %ld tv_nsec %ld state %ld",
                "Cycle.hashAuxSwitchState",
                data->tvalTimeStamp.tv_sec,
                data->tvalTimeStamp.tv_nsec,
                data->gpioValue);
              if ( data->rdbReply->type == REDIS_REPLY_ERROR )
                printf( "Error: %s\n", data->rdbReply->str );
              break;
          case GPIO_INPUT_B :  /* GPIO 45 */
              data->rdbReply = redisCommand(data->rdbContext,
                "HMSET %s tv_sec %ld tv_nsec %ld state %ld",
                "Cycle.hashSwitchState",
                data->tvalTimeStamp.tv_sec,
                data->tvalTimeStamp.tv_nsec,
                data->gpioValue);
              if ( data->rdbReply->type == REDIS_REPLY_ERROR )
                printf( "Error: %s\n", data->rdbReply->str );
              break;
          default :
            printf("Invalid GPIO pin\n" );
        }
      }
      else
      {
        printf("Interrupt missed!\n");
      }
      freeReplyObject(data->rdbReply);
    }
    pthread_exit(0); /* exit */
} /* print_message_function ( void *ptr ) */
