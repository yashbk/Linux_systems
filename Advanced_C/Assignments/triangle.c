/*
Name : Yashas B K
Date : 11-01-2022
Description : WAP to print triangle pattern as shown below
Sample i/p & o/p:
Enter the number: 5
1 2 3 4 5
6       7
8    9
10 11
12

 */


#include<stdio.h>

int main()
{
	//Variable declaration
	int i,j,count,N; 

	count=0;

	//Prompt to get n
	printf("Enter the number:");
	scanf("%d",&N);

	for(i=1;i<=N;i++)//loop to get triangle pattern
	{
		for(j=i;j<=N;j++)
		{
			if(i==1||j==i||j==N)
			{
				count++;
				printf("%d ",count);
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}
