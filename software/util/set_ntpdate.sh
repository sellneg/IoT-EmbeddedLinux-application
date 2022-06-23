#!/bin/bash

# Set date from internet ntp servers (only if connected to internet)

date
ntpdate -b -s -u pool.ntp.org
date
