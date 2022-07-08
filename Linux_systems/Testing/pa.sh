#!/bin/bash

read -p "Enter the number : "  num

temp=$num

value=1

for i in `seq ${#num}`

do 

      last_digit=$(( temp % 10 ))

      rev=$((rev*10+last_digit))

      temp=$((temp/10))

done

for j in `seq ${#num}`

do 

     first_digit=$((num%10))

     end_digit=$((rev%10))

     num=$((num/10))

     rev=$((rev/10))

     if [ $first_digit -ne $end_digit ]

     then

            value=0

     fi

done

if [ $value -eq 0 ]

then

       echo "Not a palidrome"

else

       echo "It is a palindrome"

fi
