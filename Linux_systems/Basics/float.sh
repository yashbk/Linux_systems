#!/bin/bash

echo Checking whether if loop works with floating point numbers
read -p "Enter two numbers: " num1 num2
result=`echo "$num1 < $num2"|bc`

if [ $result -eq 1 ]
then
	echo True
else
	echo False
fi
