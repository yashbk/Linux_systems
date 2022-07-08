#!/bin/bash

echo "WAP to find the sum and average of n numbers entered"

read -p "Enter the number n to get sum and average of it: " n

sum=0
for i in `seq $n`
do 
	sum=$((sum+i))
done
echo The sum is $sum
echo -n "The average is ";echo "scale=2;$sum/$n"|bc
