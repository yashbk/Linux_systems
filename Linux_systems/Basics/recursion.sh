#!/bin/bash

function recur()
{
    if [ $1 -eq 0 ]
    then
	return
    else
	echo $1
	recur $(($1-1))
    fi
  
}
recur $1
