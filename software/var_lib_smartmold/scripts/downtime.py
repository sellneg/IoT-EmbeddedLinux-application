#!/usr/bin/python

# Import the modules
import time
import mysql.connector
import subprocess
import redis

item_code = 0
item_time = 0
status_rowid = 0
status_code = 0
status_start = 0
status_end = 0

# open a connection to Mysql
cnx = mysql.connector.connect(user='root', password='root',
                              host='127.0.0.1',
                              database='dbSmartMold')
cursor = cnx.cursor()

# open a connection to Redis
r = redis.Redis(host='localhost', port=6379, db=0)

# MySQL pre-defines
query1 = ("SELECT count(id) from tblRunStatusLog")
query2 = ("SELECT id, intStatusCode, intStartEpoch, intEndEpoch FROM tblRunStatusLog "
            "ORDER BY id DESC LIMIT 1")
query3 = ("INSERT INTO dbSmartMold.tblRunStatusLog "
            "(intStatusCode, intStartEpoch, intEndEpoch, datStart, datEnd) "
            "VALUES(%s, %s, %s, FROM_UNIXTIME(%s), FROM_UNIXTIME(%s))")
query3_args = [0,0,0,0,0]
query4 = ("UPDATE dbSmartMold.tblRunStatusLog "
            "SET "
            "intEndEpoch = %s, "
            "datEnd =  FROM_UNIXTIME(%s) "
            "WHERE id = %s") 
query4_args = [0,0,0]

countr = r.llen('Cycle.listStatusLog')
entrys = r.lrange('Cycle.listStatusLog', 0, -1)

for entry in entrys:
    items = entry.split(',')
    item_time = items[0]
    item_code = items[1]
    cursor.execute(query1)
    for count in cursor:
        existing_rows = count[0]
    if existing_rows == 0:
        # just insert the new row
        status_code = item_code
        status_start = item_time
        status_end = item_time
        query3_args[0] = status_code
        query3_args[1] = status_start
        query3_args[2] = status_end
        query3_args[3] = status_start
        query3_args[4] = status_end
        cursor.execute(query3, query3_args)
        cnx.commit()
    else:
        # now do the hard work
        cursor.execute(query2)
        for id, intStatusCode, intStartEpoch, intEndEpoch in cursor:
            status_rowid = id
            status_code = intStatusCode
            status_start = intStartEpoch
            status_end = intEndEpoch
        if status_code == int(item_code):
            query4_args[0] = item_time
            query4_args[1] = item_time
            query4_args[2] = status_rowid
            cursor.execute(query4, query4_args)
            cnx.commit()
        else:
            query4_args[0] = item_time
            query4_args[1] = item_time
            query4_args[2] = status_rowid
            cursor.execute(query4, query4_args)
            query3_args[0] = item_code
            query3_args[1] = item_time
            query3_args[2] = item_time
            query3_args[3] = item_time
            query3_args[4] = item_time
            cursor.execute(query3, query3_args)
            cnx.commit()

r.ltrim('Cycle.listStatusLog', countr, -1)

cnx.commit()

cursor.close()
cnx.close()