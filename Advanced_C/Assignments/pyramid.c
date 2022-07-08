/*
Name : Yashas B K
Date : 11-01-2022
Description : P to print pyramid pattern as shown below
Sample i/p &o/p:
Enter the number: 4
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4
*/


#include<stdio.h>

int main()
{

	//Declaration of variables
	int i,j,n; 

	//Prompting user to enter n
	printf("Enter the number:");
	scanf("%d",&n);

	for(i=n;i>=1;i--) //Loop to get descending pyramid 
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	for(i=2;i<=n;i++) //loop to get ascending pyramid
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
