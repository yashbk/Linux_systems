
/*
Name : Yashas B K
Date : 24/12/2021
Description: WAP to find the median of two unsorted arrays
Sample input and output:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5
 */

#include<stdio.h>

int main()
{
	//Declaration and definition of variables
	int n1=0,n2=0,temp1=0,temp2=0;
	double median1=0,median2=0,avg=0;

	//prompting to get 'n' of array A
	printf("Enter the 'n' value of Array A:");
	scanf("%d",&n1);

	//prompting to get 'n' of array B
	printf("Enter the 'n' value of Array B:");
	scanf("%d",&n2);

	//Declaration of arrays
	int A[n1],B[n2];

	//Definition of array A
	printf("Enter the elements one by one for Array A:");
	for (int i=0;i<n1;i++)
		scanf("%d",&A[i]);

	//Definition of array B
	printf("Enter the elements one by one for Array B:");
	for(int i=0;i<n2;i++)
		scanf("%d",&B[i]);


	//Sorting array A
	for(int i=0; i<n1;i++)
	{
		for(int j=i;j<n1;j++)
		{
			if(A[i]>A[j])
			{
				temp1=A[i];
				A[i]=A[j];
				A[j]=temp1;
			}
		}
	}


	//Sorting array B
	for(int i=0;i<n2;i++)
	{
		for (int j=i;j<n2;j++)
		{
			if(B[i]>B[j])
			{
				temp2=B[i];
				B[i]=B[j];
				B[j]=temp2;
			}
		}
	}

	//Median of Array A
	if(n1%2==0){
		median1=(A[(n1/2-1)]+A[n1/2])/2.0;
	}
	else
		median1=A[n1/2];


	//Median of Array B
	if(n2%2==0)
		median2=(B[(n2/2-1)]+B[n2/2])/2.0;
	else
		median2=B[n2/2];


	printf("Median of array1 : %g\n",median1);

	printf("Median of array2 : %g\n",median2);

	avg=(median1+median2)/2.0;

	printf("Median of both Arrays: %g",avg);

	return 0;

}
