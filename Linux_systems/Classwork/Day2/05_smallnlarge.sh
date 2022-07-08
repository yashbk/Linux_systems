#!/bin/bash

echo "WAP to find the smallest and largest of entered n numbers"

read -p "How many numbers do you want to enter: " n
largest=0
smallest=100000
for i in `seq $n`
do
	read -p "Enter number $i:" num
	if [ $largest -lt $num ]
	then
		largest=$num		
	elif [ $smallest -ge $num ]
	then 
		smallest=$num	
	fi
done
echo The largest number is $largest
echo The smallest number is $smallest
