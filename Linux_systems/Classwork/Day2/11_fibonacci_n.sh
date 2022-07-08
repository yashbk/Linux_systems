#!/bin/bash

echo "WAP to print the n fibonacci terms"

read -p "Enter the number n " n
a=0 #n-2 term
b=1 #n-1 term
c=0 #current term
for i in `seq $n`
do
	a=$b
	b=$c
	c=$((a+b))
	echo $b
done
