#!/usr/bin/python

import rrdtool
import logging
from commands import getstatusoutput

logging.basicConfig(level=logging.INFO)
logging.info("mold-sweat: Running periodic logger SmartMold Mold Sweat")

databaseFile = "/var/lib/smartmold/data/moldsweat.rrd"
MIN_TEMP = -50
ERROR_TEMP = -999.99

rrds_to_filename = {
  "air_termperature" : "/sys/bus/w1/devices/28-000005502198/w1_slave",
  "relative_humidity" : "/sys/bus/w1/devices/28-00000550283e/w1_slave",
  "dew_point" : "/sys/bus/w1/devices/28-000005502a61/w1_slave",
  "mold_temperture" : "/sys/bus/w1/devices/28-000005501105/w1_slave",
}

def read_temperature(file):
  return 100.00

def read_all():
  template = ""
  update = "N:"
  for rrd in rrds_to_filename:
    template += "%s:" % rrd
    temp = read_temperature(rrds_to_filename[rrd])
    update += "%f:" % temp
  update = update[:-1]
  template = template[:-1]
  rrdtool.update(databaseFile, "--template", template, update)

read_all()
