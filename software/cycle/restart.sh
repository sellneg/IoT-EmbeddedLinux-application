#!/bin/bash

# Build script to perform a clean build for QSmart

# cd /root/QSmart/
# qmake -qt=qt5-arm-linux-gnueabihf
# make clean
# make
sudo service smartmold stop
sleep 5
sudo cp ./mmcycle /root/QSmart/QSmart
sleep 5
sudo service smartmold --full-restart

