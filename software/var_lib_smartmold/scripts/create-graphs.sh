#!/bin/bash

GRAPH_DIR=/var/www/smartmold/moldsweat
RRDFILE_SI=/var/lib/smartmold/data/moldsweat_SI.rrd
RRDFILE_USC=/var/lib/smartmold/data/moldsweat_USC.rrd

create_graph_SI()
{
	SCALE=$1
	OUTFILE=$2

	rrdtool graph "${OUTFILE}" \
		--width '400' \
		--height '100' \
		--start "-${SCALE}" \
		DEF:air_temperature="${RRDFILE_SI}":air_termperature:AVERAGE \
		DEF:relative_humidity="${RRDFILE_SI}":relative_humidity:AVERAGE \
		DEF:dewpoint="${RRDFILE_SI}":dew_point:AVERAGE \
		DEF:mold_temperature="${RRDFILE_SI}":mold_temperture:AVERAGE \
		LINE1:air_temperature#FF0000:"Air Temperature (°C)" \
		LINE1:relative_humidity#0000FF:"Relative Humidity (%)" \
		LINE1:dewpoint#000000:"Dew Point (°C)" \
		LINE1:mold_temperature#00FF66:"Mold Temperature (°C)"
}

create_graph_USC()
{
        SCALE=$1
        OUTFILE=$2

        rrdtool graph "${OUTFILE}" \
                --width '400' \
                --height '100' \
                --start "-${SCALE}" \
                DEF:air_temperature="${RRDFILE_USC}":air_termperature:AVERAGE \
                DEF:relative_humidity="${RRDFILE_USC}":relative_humidity:AVERAGE \
                DEF:dewpoint="${RRDFILE_USC}":dew_point:AVERAGE \
                DEF:mold_temperature="${RRDFILE_USC}":mold_temperture:AVERAGE \
                LINE1:air_temperature#FF0000:"Air Temperature (°F)" \
                LINE1:relative_humidity#0000FF:"Relative Humidity (%)" \
                LINE1:dewpoint#000000:"Dew Point (°F)" \
                LINE1:mold_temperature#00FF66:"Mold Temperature (°F)"
}

# Original
create_graph_SI 4h "${GRAPH_DIR}/moldsweat_hourly.png" > /dev/null
create_graph_SI 1d "${GRAPH_DIR}/moldsweat_daily.png" > /dev/null
create_graph_SI 1w "${GRAPH_DIR}/moldsweat_weekly.png" > /dev/null
create_graph_SI 1m "${GRAPH_DIR}/moldsweat_monthly.png" > /dev/null
create_graph_SI 1y "${GRAPH_DIR}/moldsweat_yearly.png" > /dev/null

# SI (Metric)
create_graph_SI 4h "${GRAPH_DIR}/C_moldsweat_hourly.png" > /dev/null
create_graph_SI 1d "${GRAPH_DIR}/C_moldsweat_daily.png" > /dev/null
create_graph_SI 1w "${GRAPH_DIR}/C_moldsweat_weekly.png" > /dev/null
create_graph_SI 1m "${GRAPH_DIR}/C_moldsweat_monthly.png" > /dev/null
create_graph_SI 1y "${GRAPH_DIR}/C_moldsweat_yearly.png" > /dev/null

# USC (United States Customary)
create_graph_USC 4h "${GRAPH_DIR}/F_moldsweat_hourly.png" > /dev/null
create_graph_USC 1d "${GRAPH_DIR}/F_moldsweat_daily.png" > /dev/null
create_graph_USC 1w "${GRAPH_DIR}/F_moldsweat_weekly.png" > /dev/null
create_graph_USC 1m "${GRAPH_DIR}/F_moldsweat_monthly.png" > /dev/null
create_graph_USC 1y "${GRAPH_DIR}/F_moldsweat_yearly.png" > /dev/null
