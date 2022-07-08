#!/bin/bash

echo Program to show the use of case

read -p "Enter your name, number or . " var

case $var in 
	yashas)
		echo You entered yashas
		;;
	1)
		echo You entered a number
		;;
	.)
		echo You entered .
		;;
	*)
		echo Wrong input, you entered $var
		;;
esac
