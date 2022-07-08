#!/bin/bash

read -p "Enter elements of an array " -a arr

for i in `seq 0 ${#arr[*]}`
do 
	echo ${arr[i]}
done
