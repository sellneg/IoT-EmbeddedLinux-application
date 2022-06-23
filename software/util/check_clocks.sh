#!/bin/bash

# Read read clocks

echo System Time:
date
echo rtc0
hwclock -r -f /dev/rtc0
echo rtc1 DS1307
hwclock -r -f /dev/rtc1
echo
