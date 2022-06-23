#!/bin/bash

# Detect i2c devices

i2cdetect -y -r 1

echo ID 0x68 - DS1307 RTC
echo ID 0x60 - TC
echo ID 0x40 - Si7021
echo ID 0x76,0x77 - BME280
