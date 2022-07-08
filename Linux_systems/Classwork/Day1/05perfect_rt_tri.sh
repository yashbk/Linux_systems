#!/bin/bash

echo WAP, given three sides of a triangle, to check whether the triangle is perfect right triangle

read -p "Enter adjacent, opposite and hypotenuse of a triangle " adj opp hyp

if [ `echo $hyp^2|bc` -eq $((`echo $adj^2|bc`+`echo $opp^2|bc`)) ]
then 
	echo It is a perfect right triangle
else 
	echo It is not a perfect right triangle
fi
