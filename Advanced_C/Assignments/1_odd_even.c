/*
Name:Yashas B K
Date: 28/11/2021
Description: The user entered number should identified whether its a odd or a even number. Mention its sign too.
Input: ./even_odd
Output: 
Enter the value of 'n' : -2
-2 is negative even number
*/

#include<stdio.h>
int main(){

	//declaring a variable "N" and assigning value 0 to overwrite junk value if any
	int N=0;

	//Printing the prompt on screen
	printf("Enter the value of 'n':");

	//scanning input from user
	scanf("%d",&N);

	if(N>=0){           //condition to check number is greater than 0 or not
		if(N==0){
			printf("%d is neither odd nor even\n",N);
			return 0;       //exit the program if number is zero
		}

		if(N%2==0)    //condition to check number is positive even or not
			printf("%d is positive even number\n",N);
		else
			printf("%d is positive odd number\n",N);

	}
	else                  
		if(N%2==0)   //condition to check number is negative even or not
			printf("%d is negative even number\n",N);
		else
			printf("%d is negative odd number\n",N);
	return 0;
}
