#!/bin/bash 

echo "WAP to print the numbers from 1 to 100"
read -p "Enter a number: " n

for i in `seq $n`
do 
	echo -n $i
done	
