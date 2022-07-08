#!/bin/bash

read -p "Enter a number n " n
k=0
for i in `seq $n`
do
	for k in `seq $((n-1)) -1 0`
	do
		echo -n " "
		
	done
	
