#!/bin/bash

echo WAP to check whether given year is leap year or not

read -p "Enter the number you want to check " year

#if [ $((year%4)) -eq 0 -a $(($year%100)) -eq 0 -a $(($year%400)) -eq 0 ]
if [ $((year%4)) -eq 0 ]
then
	if [ $((year%100)) -eq 0 ]
	then
		if [ $((year%400)) -eq 0 ]
		then 
			echo Leap year
		else 
			echo Not a leap year
		fi
	else
		echo Leap year
	fi
else 
	echo It is not a leap year
fi

