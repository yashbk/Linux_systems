#!/bin/bash 

echo "WAP to print all the even numbers between m and n, excluding m and n"

read -p "Enter value of m and n: " m n

if [ $m -ge $n ]
then 
	echo "Invalid input"
else
	m_limit=$((m+1))
	n_limit=$((n-1))
	for i in `seq $m_limit $n_limit`
	do 
		if [ $((i%2)) -eq 0 ]
		then 
			echo $i
		fi
	done
fi
	
