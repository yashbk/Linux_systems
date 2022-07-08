#!/bin/bash 

echo "While loop"

num=20
while [ $num -gt 0 ]
do
	echo $num
	num=$((num-1))
done

