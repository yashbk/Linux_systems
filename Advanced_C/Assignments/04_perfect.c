/*
Name: Yashas B K
Date: 04/12/2021
Description: Program to check a perfect number
Sample input: 6
Sample output:
Yes,entered number is perfect number
*/

#include <stdio.h>

int main()
{
	//Declaration of variables
	int num=0,multiplier=0,sum=0;

	//Prompt and scanning input from user
	printf("Enter a number:");
	scanf("%d",&num);

	if(num>0)                       //Checking for a positive number
	{
		while(++multiplier<=num)    //Loop to get multipliers
		{
			if(num%multiplier==0)   //whole divider logic
			{
				sum+=multiplier;
				//printf("multiplier is %d sum is %d",multiplier,sum);
			}
		}

		if(sum/2==num)
		{
			printf("Yes,entered number is perfect number\n");
		}
		else
		{
			printf("No, entered number is not a perfect number\n");
		}
	}
	else
	{
		printf("Error:Invalid Input, Enter only positive number\n");
	}

	return 0;
}

