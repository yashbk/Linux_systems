#!/bin/bash

echo Program to find the greatest number from three numbers

read -p "Enter three numbers: " num1 num2 num3

if [ $num1 -gt $num2 ]
then 
	if [ $num1 -gt $num3 ]
	then 
		echo $num1 is greater
	else
		echo $num3 is greater
	fi
elif [ $num3 -gt $num2 ]
then 
	echo $num3 is greater
else
	echo $num2 is greater
fi

