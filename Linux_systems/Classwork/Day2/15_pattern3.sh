#!/bin/bash 

echo "WAP to print the pattern as follows"

read -p "Enter the number of rows and columns: " n
k=0
for i in `seq $n -1 1`
do 
	for j in `seq $i`
	do 
		echo -n "*"

	done
	echo
	k=$((k+1))
	for m in `seq 0 1 $((k-1))`
	do
		echo -n " "
	done
done
echo 
