#!/bin/bash 

echo "WAP to print the pattern as follows"

read -p "Enter the number of rows and columns: " n

for i in `seq $n`
do 
	for j in `seq $i`
	do 
		echo -n "*"
	done
	echo 
done

