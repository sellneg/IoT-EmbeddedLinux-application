#!/bin/bash
ap-hotspot stop
cp /home/debian/ap-hotspot.conf /etc/ap-hotspot.conf
sleep 15
ap-hotspot start
exit
