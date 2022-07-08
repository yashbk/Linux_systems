#!/bin/bash

echo "WAP to find the sum of digits of the entered number"

read -p "Enter a four digit number: " num
sum=0
last_digit=0

for i in `seq ${#num}`
do
	last_digit=$((num%10))
	sum=$((sum+last_digit))
	num=$((num/10))
done

echo $sum
