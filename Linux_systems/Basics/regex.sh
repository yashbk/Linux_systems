#!/bin/bash

read -p "Enter number: " input

filter='^[1-9]$'
if [[ $input =~ $filter ]]
then
	echo Proper
else 
	echo Not proper
fi

