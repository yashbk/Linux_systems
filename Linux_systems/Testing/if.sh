#!/bin/bash
echo "Checking true or false for different inputs"
if [ 1.32 ]        #checking whether decimal is true
then
	echo positive decimal is true
else
	echo positive decimal is false
fi
if [ 5 ]	#checking whether positive number is true	
then
	echo Positive is true
else
	echo positive is false
fi
if [ 0 ]	
then
	echo Zero is True
else
	echo Zero is false
fi
if [ -34 ]
then
	echo Negative int is true
else
	echo Negative int is false
fi
if [ ]
then
	echo Space is true
else
	echo Space is false
fi
