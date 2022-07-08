#!/bin/bash

read -p "Enter a number" num num2
regex=^[0-9]+[.]?[a-z]+[@]{1}$
if [[ $num =~ $regex && $num2 =~ $regex ]]
then 
    echo $num
else
    echo Wrong input
fi

