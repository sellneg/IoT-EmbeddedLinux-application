#!/bin/bash

echo 'Stoping Smart Mold:'
systemctl stop smartmold.service
echo 'Stoping OPC UA server:'
systemctl stop opcua-server.service
echo 'Shuting down MySQL (will prompt for MySQL root password):'
mysqladmin -u root -p shutdown
echo 'Stoping MySQL:'
systemctl stop mysql.service
echo 'now will start eMMC build'
/opt/scripts/tools/eMMC/beaglebone-black-make-microSD-flasher-from-eMMC.sh
echo
