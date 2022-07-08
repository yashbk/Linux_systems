#!/bin/bash

echo WAP to check whether the product of two given numbers is odd or even 

read -p "Enter two numbers " num1 num2

product=$((num1&num2))
if [ $((product%2)) -eq 0 ]
then 
	echo Product is even 
else
	echo Product is odd
fi

