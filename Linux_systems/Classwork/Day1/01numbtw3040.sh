#!/bin/bash

echo WAP to check whether the entered number is between 30 and 40

read -p "Enter the number: " num

if [ $num -ge 30 -a $num -le 40 ]
then
	echo "The number is between 30 and 40"
else
	echo "Number is out of range"
fi
