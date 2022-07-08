#!/bin/bash 

echo Program to check whether the number is between 20 and 50
read -p "Enter a number: " num1

if [ $num1 -lt 50 ]
then
	if [ $num1 -gt 20 ]
	then 
		echo The number is proper
	else
		echo The number is invalid
	fi
else
	echo The number is invalid
fi
