#!/bin/bash

echo "WAP to print the fibnocci terms upto n"

read -p "Enter the number n " n
a=0 #n-2 term
b=1 #n-1 term
c=0 #current term
echo $a
while [ $c -le $n ]
do
	if [ $c -le $n ]
	then
		a=$b
		b=$c
		c=$((a+b))
		echo "$b    $c"
	fi
done
