#!/bin/bash

read -p "Enter a phone number: " num

filter='^[0-9a-zA-Z_\-\.]+[@][gmail]+[\.][a-z]{2,3}$'
#filter='^[abc0-9]+$'
if [[ $num =~ $filter ]]
then 
	echo True
else
	echo False
fi

