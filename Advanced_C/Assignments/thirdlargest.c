/*
Name : Yashas B K
Date : 09-01-2022
Description : WAP to find 3rd largest element in an array
Sample i/p&o/p:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Third largest element of the array is 4
 */

#include<stdio.h>

int third_Largest(int *arr, int n) 
{ 
	/* There should be atleast three elements */
	if (n< 3) 
	{ 
		printf(" Invalid Input "); 
		return 1; 
	} 
	int min=0; 

	// Initialize first, second and third Largest element 
	int first = arr[0], second = min, third = min; 

	// Traverse array elements to find the third Largest 
	for (int i = 1; i < n ; i ++) 
	{ 
		/* If current element is greater than first, 
		   then update first, second and third */
		if (arr[i] > first) 
		{ 
			third  = second; 
			second = first; 
			first  = arr[i]; 
		} 

		/* If arr[i] is in between first and second */
		else if (arr[i] > second) 
		{ 
			third = second; 
			second = arr[i]; 
		} 

		/* If arr[i] is in between second and third */
		else if (arr[i] > third) 
			third = arr[i]; 
	} 

	return third;
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
	ret=third_Largest(arr, size); 
	printf("The third largest element of the array is %d\n",ret);

	return 0; 
}
