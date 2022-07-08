/*
Name : Yashas B K
Date : 09-01-2022
Description : WAP to find factorial of given number using recursion
Sample input and output:
Enter the value of N : 7
Factorial of the given number is 5040
*/

#include<stdio.h>

int main()
{
	//definition of static variables
	static int num=0;
	static unsigned long long int fact = 1;
	
	//Taking input from user
	if(fact==1){
		printf("Enter the value of N : ");
		scanf("%d",&num);
	}
	
	//Validating input
	if(num>=0){
		//Terminating condition
		if(num==0){
			printf("Factorial of the given number is %llu\n",fact);
		}
		else{
			//factorial calculation
			fact=fact*num--;

			//recursive calling
			main();
		}
	}
	else
		printf("Invalid input\n");
}
