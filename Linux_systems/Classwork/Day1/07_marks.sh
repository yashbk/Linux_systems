#!/bin/bash

echo "WAP, given 3 marks of a student, to find the total. if the total <50 he fails, if it is between 51 and 100, he is average, above 100 excellent."

read -p "Enter three marks of a student: " mark1 mark2 mark3

sum=$((mark1+mark2+mark3))

if [ $sum -le 50 ]
then
	echo Student failed
elif [ $sum -ge 51 -a $sum -le 100 ]
then 
	echo Student is average
else
	echo Excellent
fi
