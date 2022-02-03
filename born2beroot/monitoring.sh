# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    monitoring.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 23:21:28 by flcarval          #+#    #+#              #
#    Updated: 2022/02/01 20:43:10 by flcarval         ###   ########.fr        #
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
PURPLE='\033[0;35m'
ORANGE='\033[0;33m'
CYAN='\033[0;36m'
WHITE='\033[1;37m'

monitoring () {
	echo -e "                       _ _           _                _   
	 _____ ___ ___|_| |_ ___ ___|_|___ ___    ___| |_ 
	|     | . |   | |  _| . |  _| |   | . |_ |_ -|   |
	|_|_|_|___|_|_|_| | |___|_| |_|_|_|_  |_||___|_|_|
			|__|              |___|           
	"
	ARCH=$(uname -a)
	echo -e "> Architecture   : ${ARCH}";

#	echo -e -n "> Kernel version : ";uname -v;

	CPU=$(lscpu | grep "Core(s) per socket" | tr -dc '0-9')
	echo -e "> Physical cores : ${CPU}";

	echo -e -n "> Logical cores  : ";cat /proc/cpuinfo | grep processor | wc -l;

#	MEM=$(cat /proc/meminfo | grep "MemTotal" | tr -dc '0-9')
#	AVA=$(cat /proc/meminfo | grep "MemAvailable" | tr -dc '0-9')
#	USED=$(($MEM - $AVA))
#	PERCENT=$((($USED * 100) / $MEM))
	MEM=$(free -h | awk 'NR==2{print $2}')
	USED=$(free -h | awk 'NR==2{print $3}')
	PERCENT=$(free -m | awk 'NR==2{printf "%.2f%%", $3*100/$2}')
	echo -e "> Memmory usage  : ${USED} / ${MEM} [${PERCENT}% used]";

	VOL=$(df -h --total --output=size,source | grep total | awk '{print $1}')
	USEDVOL=$(df -h --total --output=used,source | grep total | awk '{print $1}')
	PERC=$(df -l --output=source,pcent --total | grep total | tr -dc '0-9')
	echo -e "> Volume usage   : ${USEDVOL} / ${VOL} [${PERC}% used]"

	CPUP=$(top -bn1 | grep load | awk '{printf "%.2f%%\n", $(NF-2)}')
	echo -e "> CPU\t\t : [${CPUP} used]"

	echo -e -n "> Latest reboot  : ";who | awk 'NR==1{print $3,$4}'

	if [ $(lsblk -o type | grep "lvm" | wc -l) -ge 1 ]; then
		STATUS=ENABLE
	else
		STATUS=DISABLE
	fi
	echo -e "> LVM status     : ${STATUS}"

	ACTIVE=$(w | wc -l | awk '{print $1-2}')
	echo -e "> Active users   : ${ACTIVE} (root is counted)"

	IPV4=$(ip a | grep ether -1 | grep inet | cut -b 10-18)
	echo -e "> ipv4 address   : ${IPV4}"

	MAC=$(ip a | grep ether | cut -b 16-32)
	echo -e "> MAC address    : ${MAC}"

	SC=$(($(cat /var/log/sudo/commands.log | wc -l) / 2))
	echo -e "> sudo commands  : ${SC}"
}

rm -f /var/log/monitoring/monitoring.log
monitoring > /var/log/monitoring/monitoring.log
wall /var/log/monitoring/monitoring.log
