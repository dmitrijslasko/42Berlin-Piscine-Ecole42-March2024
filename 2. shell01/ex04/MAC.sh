#/bin/sh
ifconfig | grep ether | awk -F ' ' '{print $2}'
