#!/bin/bash

read -p "Enter the numbers " n1 n2

regex='^[- 0-9 \.]+$'
if [[ $n1 =~ $regex && $n2 =~ $regex ]]
then
	echo "scale=3;$n1+$n2"|bc
else
	echo "Entered wrong input"
fi

