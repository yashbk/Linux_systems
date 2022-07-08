#!/bin/bash 

echo "WAP to print all the even numbers from 1 to 100"

read -p "Enter n " n
for i in `seq 0 2 $n`
do 
	echo $i
done

