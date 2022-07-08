#!/bin/bash

read -p "Enter number of rows and columns: " row 

for i in $(seq $row)

do
	for j in `seq $i`
	do 
		echo -n  "*"
	done
	echo 
done

	
