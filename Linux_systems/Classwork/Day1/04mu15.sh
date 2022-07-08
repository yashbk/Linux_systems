#!/bin/bash

echo WAP to check whether the entered number is multiple of 5

read -p "Enter a number " num

if [ $((num%5)) -eq 0 ]
then 
	echo The number is a multiple of five
else
	echo The number is not a multiple of five
fi
