#!/bin/bash

set -e # Exit if any commands fail
set -u # Warn about uninitialized variables

TMP=$(mktemp)
BASEDIR=$(dirname "$0")

## Section for Bosch Sensor
# /usr/bin/python "${BASEDIR}"/BME280.py >  "${TMP}"

## Section for SI Sensor
/usr/bin/python "${BASEDIR}"/SI7021.py > "${TMP}"

## Read in values from file
HUMIDITY=$(grep Humidity "${TMP}" | awk '{print $4}')
TEMPERATURE_C=$(grep Celsius "${TMP}" | awk '{print $5}')
TEMPERATURE_F=$(grep Fahrenheit "${TMP}" | awk '{print $5}')

## Read Thermocouple
# /usr/bin/python "${BASEDIR}"/MCP9600.py >  "${TMP}"
# MOLDTEMP=$(cat "${TMP}" | awk '{print $1}')
## use c executable instead
/var/lib/smartmold/bin/MCP9600 > "${TMP}"
MOLDTEMP_C=$(grep Celsius "${TMP}" | awk '{print $2}')
MOLDTEMP_F=$(grep Fahrenheit "${TMP}" | awk '{print $2}')

## script expects two input parameters. First the temperature (in °C) and
## second the relative humidity (in %).
## reference -- http://www.meteo-blog.net/2012-05/dewpoint-calculation-script-in-python/
/usr/bin/python "${BASEDIR}"/DEWPOINT.py "${TEMPERATURE_C}" "${HUMIDITY}"  >  "${TMP}"
DEWPOINT_C=$(grep Celsius "${TMP}" | awk '{print $3}')
DEWPOINT_F=$(grep Fahrenheit "${TMP}" | awk '{print $3}')

rm -f "${TMP}"

echo "Air Temperature: " "${TEMPERATURE_C}"
echo "Relative Humidity: " "${HUMIDITY}"
echo "Dew Point: " "${DEWPOINT_C}"
echo "Mold Temperature" "${MOLDTEMP_C}"

## Update RRDTool Database
## air_termperature
## relative_humidity
## dew_point
## mold_temperture

# US Customary
RRDFILE="/var/lib/smartmold/data/moldsweat_USC.rrd"
rrdtool update "${RRDFILE}" "N:${TEMPERATURE_F}:${HUMIDITY}:${DEWPOINT_F}:${MOLDTEMP_F}"
# SI
RRDFILE="/var/lib/smartmold/data/moldsweat_SI.rrd"
rrdtool update "${RRDFILE}" "N:${TEMPERATURE_C}:${HUMIDITY}:${DEWPOINT_C}:${MOLDTEMP_C}"


## Update Mold Sweat table in MySQL
/usr/bin/python "${BASEDIR}"/sweatmysql.py
