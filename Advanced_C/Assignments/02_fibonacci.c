/*
Name: Yashas B K
Date: 28/11/2021
Description: Program to print positive fibonacci series until n numbers
Sample input: Enter a number: 8
Sample output: 0, 1, 1, 2, 3, 5, 8
 */

//header file
#include<stdio.h>

int main()
{	
	//declaration of variables
	int N;
	int a=0,b=1,c=a+b;

	//prompt for user to enter number
	printf("Enter a number:");

	//scanning input from user
	scanf("%d",&N);
	if(N==0)                     //checking if input is zero
		printf("%d\n",a);
	else
	{
		if(N>0){                 //checking number is positive or not
			printf("%d, %d",a,b); //printing first two numbers 
			while(c<=N){
				printf(", %d",c);	//printing fibonacci series
				a=b;
				b=c;
				c=a+b;
			}
			printf("\n");
		}
		else
			printf("Invalid input\n");
	}
}
