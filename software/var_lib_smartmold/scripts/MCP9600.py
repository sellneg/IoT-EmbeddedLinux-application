#!/usr/bin/env python

import smbus
import time

address = 0x60
device_found = 0

bus = smbus.SMBus(1)

for device in range(128):

      try:
         bus.read_byte(device)
         if device == address:
            device_found = 1
         # print hex(device) 
      except:
         time.sleep(0)        

if device_found:
    bus.write_byte_data(address, 0xC0, 0x00)
    time.sleep(0.5)
    data = bytearray()
    bus.write_byte(address, 0xC1)
    time.sleep(0.5)
    data = bus.read_i2c_block_data(address, 2)
    # print data[0]
    # print data[1]
    if((data[0] & 0x80) == 0x80):
        data[0] = data[0] &0x7F
        temp = 1024 - (data[0] * 16 + data[1]/16.00)
        #    temp = (temp * 1.8)+32
        print temp
    else:
        temp = data[0] * 16 + data[1] / 16.00
    #    temp = (temp * 1.8)+32
        print temp
else:
	print '0.0'
