/*
Name : Yashas B K
Date : 09-01-2022
Description : WAP to find 2nd largest element in an array
Sample i/p&o/p:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Second largest element of the array is 5
 */

#include<stdio.h>

int sec_largest(int *arr, int n) 
{ 
	// There should be atleast three elements
	if (n<3) 
	{ 
		printf("Invalid Input/n"); 
		return 1; 
	} 

	int min=0; 
	// Initialize first, second largest 
	int first=arr[0], second=min, third=min; 

	// Traverse array elements to find the third Largest 
	for (int i=1;i<n;i++) 
	{ 
		/* If current element is greater than first, 
		   then update first, second and third */
		if (arr[i]>first) 
		{ 
			third = second; 
			second = first; 
			first = arr[i]; 
		} 

		/* If arr[i] is in between first and second */
		else if (arr[i]>second) 
		{ 
			third = second; 
			second = arr[i]; 
		} 

		/* If arr[i] is in between second and third */
		else if (arr[i] > third) 
			third = arr[i]; 
	} 

	return second;
} 


int main() 
{ 
	//Declaring variable
	int size, ret;

	//Read size from the user
	printf("Enter the size of the array :");
	scanf("%d", &size);


	int arr[size];
	printf("Enter the element into the  array:");

	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);

	int n = sizeof(arr)/sizeof(arr[0]); 
	ret=sec_largest(arr, size); 
	printf("The second largest element of the array is %d\n",ret);

	return 0; 
}
