#!/bin/bash 

echo "WAP to find that calculates and prints the sum of odd integers from m to n"

read -p "Enter m and n: " m n
sum=0
for i in `seq $m $n`
do 
	if [ $((i%2)) -ne 0 ]
	then 
		sum=$((sum+i))
	fi
done
echo The sum is $sum
