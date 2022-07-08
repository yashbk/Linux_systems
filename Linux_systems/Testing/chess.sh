#!/bin/bash
rows=8
columns=8
for row in `seq $rows`
do 
    for column in `seq $columns`
    do
	if [ $((row%2)) -eq 1 ]
	then
	    if [ $((column%2)) -eq 1 ]
	    then 
		echo -e -n "\e[47m" " "
	    else
		echo -e -n "\e[40m" " "
	    fi
	else
	    if [ $((column%2)) -eq 1 ]
	    then
		echo -e -n "\e[40m" " "
	    else
		echo -e -n "\e[47m" " "
	    fi
	fi
    done
    echo -e -n "\e[0m" " "
    echo
done
