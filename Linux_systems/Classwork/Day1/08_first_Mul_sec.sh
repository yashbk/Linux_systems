#!/bin/bash

echo "WAP that reads in 2 integers and determines and prints if the first is a multiple of the second "

read -p "Enter two numbers " num1 num2

if [ $((num1%num2)) -eq 0 ]
then 
	echo $num1 is a multiple of $num2
else
	echo Not a multiple
fi
