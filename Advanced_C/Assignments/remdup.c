/*
Name : Yashas B K
Date : 09-01-2022
Description : WAP to remove duplicate elements in a given array
Sample i/p &o/p:
Enter the size: 5
Enter elements into the array: 5 1 3 1 5
After removing duplicates: 5 1 3
 */

#include <stdio.h>

//function to remove duplicate from array1 and storing in array2
void fun(int *arr1, int size, int *arr2, int *new_size){
	int j, dup=0; // declartion of variables

	for(int i=0;i<size;i++) //loop to check duplicates
	{
		for(j=i+1;j<size;j++)
		{
			if(arr1[i]==arr1[j])
			{
				for(int k=j;k<size;k++)
				{
					arr1[k]=arr1[k+1];
				}
				size--;
				j--;
				*new_size=size;
				dup++;
			}
		}
	}

	if(dup==0) // if there are no duplicates then same array is printed else removing duplicate array is printed 
	{
		*new_size=size;
		for(int i=0;i<*new_size;i++)
			arr2[i]=arr1[i];
	}
	else
		for(int i=0;i<*new_size;i++)
			arr2[i]=arr1[i];
}

int main()
{
	int size, new_size; //Declaring variable
	printf("Enter the size: "); //Reading array size
	scanf("%d",&size);

	int arr1[size]; //declaring two arrays
	int arr2[new_size];

	printf("Enter elements into the array: \n "); 

	for(int i=0;i<size;i++)
		scanf("%d",&arr1[i]); //Reading elements of array 

	fun(arr1,size,arr2,&new_size);

	printf("After removing duplicates: ");
	for (int i=0;i<new_size;i++) //Printing output
		printf("%d ",arr2[i]);
	printf("\n");

	return 0;
}
