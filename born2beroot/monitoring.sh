# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    monitoring.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 23:21:28 by flcarval          #+#    #+#              #
#    Updated: 2022/01/07 00:33:59 by flcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	launch at boot
#	no error appear
#	architecture + kernel version
#	number of physical cores
#	number of logical cores
#	total memory + % used
#	total volume + % used
#	% used cpu
#	date and hour last reboot
#	LVM 1/0
#	number of active connexions
#	number of users
#	ipv4 + MAC
#	number of sudo commands

#!/bin/bash

NC='\033[0m'
RED='\033[0;31m'
PURPLE='\033[0;35m'
ORANGE='\033[0;33m'
CYAN='\033[0;36m'
WHITE='\033[1;37m'

echo -e "${PURPLE}               _ _           _                _   
 _____ ___ ___|_| |_ ___ ___|_|___ ___    ___| |_ 
|     | . |   | |  _| . |  _| |   | . |_ |_ -|   |
${ORANGE}|_|_|_|___|_|_|_| | |___|_| |_|_|_|_  |_||___|_|_|
                |__|              |___|           
"

echo -e -n "${CYAN}> Architecture   : ${NC}";uname -p;

echo -e -n "${CYAN}> Kernel version : ${NC}";uname -v;

CPU=$(lscpu | grep "Core(s) per socket" | tr -dc '0-9')
echo -e "${CYAN}> Physical cores : ${NC}${CPU}";

echo -e -n "${CYAN}> Logical cores  : ${NC}";cat /proc/cpuinfo | grep processor | wc -l;

MEM=$(cat /proc/meminfo | grep "MemTotal" | tr -dc '0-9')
AVA=$(cat /proc/meminfo | grep "MemAvailable" | tr -dc '0-9')
USED=$(($MEM - $AVA))
PERCENT=$((($USED * 100) / $MEM))
echo -e "${CYAN}> Total memmory  : ${NC}${MEM} Kilo-Bytes ${WHITE}[${PERCENT}% used]";

VOL=$(df -l --output=source,size --total | grep total | tr -dc '0-9')
PERC=$(df -l --outpu=source,pcent --total | grep total | tr -dc '0-9')
echo -e "${CYAN}> Total volume   : ${NC}${VOL} Kilo-Bytes ${WHITE}[${PERC}% used]"

CPUP=$(mpstat | grep -A 5 "%idle" | tail -n 1 | awk -F " " '{print 100 -  $ 12}')
echo -e "${CYAN}> CPU\t\t : ${WHITE}[${CPUP}% used]"

echo -e -n "${CYAN}> Latest reboot  : ${NC}";who -b | cut -c 25-;

if [ $(lsblk -o type | grep "lvm" | wc -l) -ge 1 ]; then
	STATUS=ENABLE
else
	STATUS=DISABLE
fi
echo -e "${CYAN}> LVM status     : ${NC}${STATUS}"

ACTIVE=$(ps -eaho user | sort -u | wc -l)
echo -e "${CYAN}> Active users   : ${NC}${ACTIVE} ${WHITE}(root is counted)"

IPV4=$(ifconfig | grep --max-count=1 "inet" | cut -b 14-23)
echo -e "${CYAN}> ipv4 address   : ${NC}${IPV4}"

MAC=$(ifconfig | grep --max-count=1 "ether" | cut -b 15-31)
echo -e "${CYAN}> MAC address    : ${NC}${MAC}"

SC=$(($(cat /var/log/sudo/commands.log | wc -l) / 2))
echo -e "${CYAN}> sudo commands  : ${NC}${SC}"
