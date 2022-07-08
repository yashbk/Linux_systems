#!/bin/bash

echo "WAP to find the sum and average of n numbers entered"

read -p "Enter the n numbers to get sum and average of it: " n
sum=0
input=0
for k in `seq $n`
do 
	read -p "Enter numb $k: " num
	sum=$((sum+num))
done
echo The sum is $sum
echo -n "The average is ";echo "scale=2;$sum/$n"|bc
