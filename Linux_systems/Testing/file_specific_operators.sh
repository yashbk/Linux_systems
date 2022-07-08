#!/bin/bash

if [ -s $1 ]
then
	echo Not a empty file
else
	echo It is a empty file
fi

if [ -f $1 ]
then
	echo It is a file
else
	echo It is not a file
fi

if [ -d $1 ]
then
	echo It is a directory
else
	echo Not a directory
fi

if [ -e $1 ]
then
	echo It exists
else
	echo "Doesn't exist"
fi

