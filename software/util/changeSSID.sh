#! /bin/bash

newSSID=$1

if [ $# -eq 0 ]
 then
	echo "No Arguments"
else
	sed -i '5s/.*/ssid='$newSSID'/' /home/debian/ap-hotspot.conf
fi
exit
