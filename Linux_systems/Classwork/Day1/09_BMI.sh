#!/bin/bash
echo "WAP to calculate BMI weight/(height*height)"

read -p "Enter your weight in kg and height in metre " weight height

BMI=`echo "scale=3;$weight/($height*$height)"|bc`

if [ `echo "$BMI <= 18.5"|bc` -eq 1 ]
then 
	echo You are underweight
elif [ `echo "$BMI > 18.5"|bc` -eq 1 -a `echo "$BMI <= 24.9"|bc` -eq 1 ]
then
	echo  You are normal
elif [ `echo "$BMI >= 25"|bc` -eq 1 -a `echo "$BMI <= 29.9"|bc` -eq 1 ]
then 
	echo You are overweight
else
	echo "Obese, Go to gym you fat ass!"
fi
