#!/bin/bash


used=(`df -h  /usr/bin | tr -s " " " " |cut -d " " -f5`)
name=(`df -h  /usr/bin | tr -s " " " " |cut -d " " -f1`)

for i in seq 0 ${#used[@]}
do


        if [[ ${used[$i]} -le  10 ]]
        then
                echo -n " ${name[$i]} has ${used[$i]}% of disk space "

        else
echo -n 
        fi

done
