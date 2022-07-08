#!/bin/bash

read -p "Enter two numbers " n1 n2
#regex='^[-]?[0-9 \.]+$'
if [[ $n1=~'^[-]?[0-9]+[\.]?$' && $n2=~'^[-]?[0-9]+[\.]?$' ]]
then
	echo "scale=3;$n1+$n2"|bc

else
	echo False
fi

