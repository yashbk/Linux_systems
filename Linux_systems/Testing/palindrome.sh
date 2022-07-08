#!/bin/bash

read -p "Enter a multidigit number: " num
temp=$num
regex='^[0-9]{4,}$'
if [[ $num =~ $regex ]]
then
	echo Working
	for i in `seq ${#num}`
	do
		r=$((num%10))
		sum=$(((sum*10)+r))
		num=$((num/10))
	done
	if [ $temp -eq $sum ]
	then
		echo It is a palindrome
	else
		echo It is not a palindrome
	fi
fi



