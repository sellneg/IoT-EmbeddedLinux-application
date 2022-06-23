#!/bin/bash

echo 'Stoping Smart Mold:'
systemctl stop smartmold.service
echo 'Stoping OPC UA server:'
sleep 5
systemctl stop opcua-server.service
echo 'Shuting down MySQL (will prompt for MySQL root password):'
sleep 5
mysqladmin -u root -p shutdown
echo 'Stoping MySQL:'
sleep 5
systemctl stop mysql.service
# echo 'now will start eMMC build'
# /opt/scripts/tools/eMMC/init-eMMC-flasher-v3.sh
echo
