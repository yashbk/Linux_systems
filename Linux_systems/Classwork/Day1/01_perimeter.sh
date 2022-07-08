#!/bin/bash

echo WAP to find the perimeter of a rectangle if length and breadth are given
echo "Perimeter = 2*(L+B)" 

read -p "Enter length and breadth of a rectangle: " length breadth
Perimeter1=$((2*($length+$breadth)))
						#Perimeter2=expr 2 * ( $length + $breadth ) wont work
						#let Perimeter3=2*(length+breadth) does not work
echo $Perimeter1
