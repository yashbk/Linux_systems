#!/bin/bash

arr=(`shuf -i 1-10`)
for i in ${arr[@]}
do
    echo $i
done
