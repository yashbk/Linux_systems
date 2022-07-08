#!/bin/bash 

echo "WAP to print HelloWorld n times"

read -p "How many times do you want to print: " n

for i in `seq $n`
do 
	echo "HelloWorld"
done
