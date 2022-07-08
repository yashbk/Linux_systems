#!/bin/bash

echo "Defining an array and accessing it's elements "

arr=(123 hello hi good bad banana)
echo ${arr[*]}
echo ${arr[@]}
echo -n $((${#arr[@]}-1));echo "  printing n-1"
echo ${#arr[*]}
echo $arr    #prints first value of array
echo ${arr[-1]}
arr[1]=meow
echo ${arr[*]}

