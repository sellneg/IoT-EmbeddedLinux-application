#!/usr/bin/python

# Import the modules
import time
import mysql.connector
import subprocess

cnx = mysql.connector.connect(user='root', password='root',
                              host='127.0.0.1',
                              database='dbSmartMold')

# Set up the echo command and direct the output to a pipe
pSI = subprocess.Popen(['rrdtool','lastupdate','/var/lib/smartmold/data/moldsweat_SI.rrd'], stdout=subprocess.PIPE)

# Run the command
outputSI = pSI.communicate()[0]

word_listSI = outputSI.split()

time_stamp_stringSI = word_listSI[4]
time_stamp_stringSI = time_stamp_stringSI.strip(':')
time_stampSI = float(time_stamp_stringSI)
air_temperatureSI = word_listSI[5]
relative_humiditySI = word_listSI[6]
dew_pointSI = word_listSI[7]
mold_tempertureSI = word_listSI[8]

# Set up the echo command and direct the output to a pipe
pUSC = subprocess.Popen(['rrdtool','lastupdate','/var/lib/smartmold/data/moldsweat_USC.rrd'], stdout=subprocess.PIPE)

# Run the command
outputUSC = pUSC.communicate()[0]

word_listUSC = outputUSC.split()

time_stamp_stringUSC = word_listUSC[4]
time_stamp_stringUSC = time_stamp_stringUSC.strip(':')
time_stampUSC = float(time_stamp_stringUSC)
air_temperatureUSC = word_listUSC[5]
relative_humidityUSC = word_listUSC[6]
dew_pointUSC = word_listUSC[7]
mold_tempertureUSC = word_listUSC[8]

# Update MySQL
update_moldsweat = ("UPDATE tblMoldSweat "
			"SET sngAirTemperatureC = %s,"
                                "sngAirTemperatureF = %s,"
				"sngRelativeHumidity = %s,"
				"sngDewPointC = %s,"
                                "sngDewPointF = %s,"
				"sngMoldTemperatureC = %s,"
                                "sngMoldTemperatureF = %s,"
				"datTimeStamp = FROM_UNIXTIME(%s)")
cursor = cnx.cursor()

data_moldsweat = (air_temperatureSI, air_temperatureUSC, relative_humiditySI, dew_pointSI, dew_pointUSC, mold_tempertureSI, mold_tempertureUSC, time_stamp_stringSI)

# Update record
# print data_moldsweat
# print time.ctime(time_stamp)
cursor.execute(update_moldsweat, data_moldsweat)

# Make sure data is committed to the database
cnx.commit()

cursor.close()
cnx.close()
