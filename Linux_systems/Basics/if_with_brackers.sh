#!/bin/bash 
read -p "Enter two numbers " num1 num2

if [ $num1 -gt $num2 ]
then
	echo true
else 
	echo false
fi

