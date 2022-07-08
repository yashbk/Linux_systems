#!/bin/bash

read -p "Enter number of rows and columns: " row 

for i in $(seq $row)

do
	for j in `seq $i`
	do 
		let sum=$i+$j
		if [ $sum%2 -eq 0 ]
		then
			echo -n  "1"
		else
			echo -n "0"
		fi

	done
	echo 
done

	
