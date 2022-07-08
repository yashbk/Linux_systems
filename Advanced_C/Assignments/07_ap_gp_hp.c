/*
Name: Yashas B K
Date: 04/12/2021
Description: Program to print AP,GP and HP series by taking starting number, cd/ratio and number of terms

Sample input: 
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5

Sample output:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.5, 0.2, 0.125, 0.0909091, 0.0714285
*/

#include <stdio.h>

int main ()
{
	//Variable declaration
	int A = 0, R = 0, N = 0, AP = 0, GP = 0, HP = 0;

	//Prompting and scanning inputs from user
	printf ("Enter the First Number 'A':");
	scanf ("%d", &A);
	printf ("Enter the Common Difference/Ratio 'R':");
	scanf ("%d", &R);
	printf ("Enter the number of terms 'N':");
	scanf ("%d", &N);

	//Assigning initial values to series
	AP = A;
	GP = A;
	HP = A;

	if (N > 0)                        //Checking N is positive number or not
	{
		//Generating AP series
		printf ("AP=%d", AP);
		for (int i = A; i <= N; ++i)
		{
			AP += R;
			printf (", %d", AP);
		}

		//Generating GP series
		printf ("\nGP=%d", GP);
		for (int i = A; i <= N; ++i)
		{
			GP *= R;
			printf (", %d", GP);
		}

		//Generating HP series
		printf ("\nHP=%g", 1 / (float) HP);
		for (int i = A; i <= N; ++i)
		{
			HP += R;
			printf (", %g", 1 / (float) HP);
		}
		printf("\n");
	}
	else
	{
		printf ("Invalid input\n");        //Printing error
	}


	return 0;
}


