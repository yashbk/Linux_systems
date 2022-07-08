#!/bin/bash

read -p " Enter the weight in kg: " wt
read -p " Enter the height in meters: " ht

regex='^[0-9\.]+$'

if [[ $wt =~ $regex && $ht =~ $regex ]]
then
        bmi=`echo "scale=3;$wt/($ht*$ht)"|bc`

        if [ `echo "$bmi <= 18.5"|bc` -eq 1 ]
        then 
                echo " You are Underweight"

        elif [ `echo "$bmi > 18.5"|bc` -eq 1 -a `echo "$bmi <= 24.9"|bc` -eq 1 ]
        then
        echo "Your bmi is  Normal"


         elif [ `echo "$bmi>=25"|bc` -eq 1 -a `echo "$bmi <= 29.9"|bc` -eq 1 ]
         then
         echo "you are overweight"

 else
        echo "you are Obese"
        fi
else

echo "Error: invalid input"
echo "Please enter only positive values"
fi
