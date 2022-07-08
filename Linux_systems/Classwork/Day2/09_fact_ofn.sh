#!/bin/bash 

echo "WAP to find the factorial of the entered number"

read -p "Enter the number you want to find factorial " n
fact=1
for i in `seq $n`
do
	fact=$((fact*i))
done
echo Factorial of $n is $fact

