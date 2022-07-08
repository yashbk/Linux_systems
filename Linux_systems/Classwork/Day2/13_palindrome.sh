#!/bin/bash 

echo "WAP to check whether a number is palindrome or not"

read -p "Enter a number to check whether it is palindrome or not " num

rev=`echo $num|rev`

if [ $num = $rev ]
then
	echo It is a palindrome
else
	echo Not a palindrome
fi
