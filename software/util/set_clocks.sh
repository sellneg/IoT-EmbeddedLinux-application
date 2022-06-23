#!/bin/bash

# Set rtc clocks

echo System Time:
date
echo rtc0
hwclock -w -f /dev/rtc0
sleep 1
hwclock -r -f /dev/rtc0
echo rtc1 DS1307
hwclock -w -f /dev/rtc1
sleep 1
hwclock -r -f /dev/rtc1
echo
