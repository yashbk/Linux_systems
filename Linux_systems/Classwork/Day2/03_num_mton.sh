#!/bin/bash

echo "WAP to print the numbers from m to n"

read -p "Enter the limits: " m n

if [ $m -gt $n ]
then 
	echo Enter valid input
else
	for i in `seq $m $n`
	do
		echo $i
	done
fi

