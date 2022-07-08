/*
Name: Yashas B K
Date: 28/11/2021
Description: Program to print negative fibonacci upto N 
Sample input: Enter a number: -8
Sample output: 0, 1, -1, 2, -3, 5, -8
 */

#include<stdio.h>
int main()
{
	//variable declaration
	int N;
	int a = 0, b = 1, c = a - b,d=c;

	//prompt to enter a number 
	printf ("Enter a number:");
	scanf ("%d", &N);

	//To check whether number entered is 0 or more
	if (N >= 0)
	{
		if (N == 0)
		{
			printf ("%d\n", a);
		}
		else
		{
			printf ("Invalid input\n");
		}
	}
	else
	{
		printf ("%d, %d", a, b);
		while (d >= N)
		{
			printf (", %d", c);			//printing negative fibonacci series
			a = b;
			b = c;
			c = a - b;
			if (c > 0)
				d = -c;
			else
				d = c;
		}
		printf ("\n");
	}

	return 0;

}
