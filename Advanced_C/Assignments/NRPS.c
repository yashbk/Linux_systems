/*
Name : Yashas B K
Date : 02-02-2022
Description : Generate consecutive NRPS of length n using k distinct character
Sample i/p &o/p:
Enter the number characters C : 3
Enter the Length of the string N : 7
Enter 3 distinct characters : a b a
Error : Enter distinct characters

 */
#include <stdio.h>

void NPRSString(char *str , int len, int k)
{
	int i, val = 0, count = 0;

	//Logic to print NRPS
	printf("Possible NRPS is ");
	for (i = 0; i < len; i++)
	{
		if(i%k == 0 && i != 0)
		{
			val++;
		}
		printf("%c", *(str+((i+val)%k)));
	}
	printf("\n");

}

int main()
{
	//Variable declaration
	int n, k, i, j;
	char dist_char[30];

	//Prompting to get k value from user
	printf("Enter the number of characters C : ");
	scanf("%d", &k);

	//Validating k value
	if ((k< 1) || (k > 10))
	{
		printf("Invalid input\n");
		return 1;
	}

	//Propt to get length of string from user
	printf("Enter the Length of the string N: ");
	scanf("%d", &n);


	//Validating length
	if (n < 0)
	{
		printf("Enter positive value\n");
		return 1;
	}


	//Prompt to get characters
	printf("Enter %d disctint characters: \n",k);
	for (i = 0; i < k; i++)
	{
		scanf("\n %c", &dist_char[i]);
	}


	//Checking for repeated characters 
	for (i = 0; i < n; i++)
	{
		for (j = (i+1); j < k; j++)
		{
			if(dist_char[j] == dist_char[i] )
			{
				printf("Error: Enter distinct characters\n");
				return 1;
			}
		}
	}

	//Calling the NRPS function
	NPRSString(dist_char, n, k);
	return 0;
}
