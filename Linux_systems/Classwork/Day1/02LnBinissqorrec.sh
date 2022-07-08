#!/bin/bash

echo WAP to check whether the given length and breadth corresponds to square or rectangle

read -p "Enter the length and breadth: " length breadth

if [ $length -eq $breadth ]
then 
	echo It is a square
else 
	echo It is a rectangle
fi
