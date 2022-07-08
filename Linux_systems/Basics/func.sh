#!/bin/bash
function sum()
{
	#sum=`expr $1 + $2`
	result=`echo $1+$2|bc`
	echo $result
	return
}
sum $1 $2
