/*
Name : Yashas B K
Date : 11-01-2022
Description : WAP to print the numbers in X format 
Sample input and output: 
Enter the number: 4
1  4
 23
 23
1  4
 */

#include<stdio.h>
int main()
{

	int i,j,N; //Declartion of variables
	int count;


	printf("Enter the number:");//Read N
	scanf("%d",&N);

	count=(N+1)/2;



	for(i=1;i<=N;i++) //Loop to get pattern
	{
		for(j=1; j<=N;j++)
		{
			if (i==j)
				printf("%d",i); //left diagonal
			else
				if((i+j)==(N+1))  //Right digonal
					printf("%d",j);
				else
					printf(" ");
		}
		printf("\n");
	}

	return 0;
}
