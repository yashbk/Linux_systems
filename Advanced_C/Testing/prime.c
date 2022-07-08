/*
Name : Yashas B K
Date : 25/12/21
Description : WAP to print all primes using Sieve of Eratosthenes method
Sample i/p : Enter the value of 'n' : -20
Sample o/p : Please enter a positive number which is > 1
 */

#include <stdio.h>

int main()
{
	//declaration of variables
	int n,i,j; 

	//prompt to get 'n' from user	
	printf("Enter the value of 'n': ");  
	scanf("%d",&n);

	//checking whether entered number is greater than 1
	if(n>1)                                                             
	{
		int arr[n];             //Initializing the array with size

		printf("The primes less than or equal to %d are : ",n); 

		//Loop to create the array elements
		for(i=2; i<=n; i++)
		{
			arr[i]=i;
		}

		//Loops to get the all prime number upto given number
		for(i=2; i*i<=n; i++)
		{
			for(j=2; j<=n/2; j++)
			{
				if((arr[i]*j) < n)
				{
					arr[arr[i]*j]=0;
				}
			}
		}

		//Loop for printing the array element which all are prime number
		for(i=2; i<n; i++)  
		{
			if(arr[i] != 0 )
				printf("%d ",arr[i]);
		}
		printf("\n");

	}
	else
		printf("Please enter a positive number which is > 1"); //Error message
	return 0;
}
