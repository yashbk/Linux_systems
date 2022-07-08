/*
Name : Yashas B K
Date : 09-01-2022
Description : Print the values in sorted order without modifying or copying array
Sample i/p &o/p:
Enter the size : 5
Enter 5 elements
10 1 3 8 -1
After sorting: -1 1 3 8 10
Original array values 10 1 3 8 -1

 */

#include<stdio.h>


void print_sort(int array[], int count) //function to sort 
{

	int min,min1,max; //declaration
	min=array[0]; 
	max=array[0];
	min1=array[0];   

	for(int i=0;i<count;i++)  //first find min and max out of array
	{
		if(array[i]<min)
			min=array[i];
		if(array[i]>max)
			max=array[i];
	}
	printf("After sorting: %d ",min);
	while(min!=max)
	{
		for(int i=0;i<count;i++)
		{
			if(array[i]!=min && array[i]>min)     //choose an element greater than already found min and not equal to min itself
			{
				min1=array[i];
				break;
			}
		}
		for(int i=0;i<count;i++)
		{
			if(array[i]<min1 && array[i]>min)    //with the choosen element in above loop find which is lowest out of array
				min1=array[i];
		}
		printf("%d ",min1);
		min=min1;                                   //update min element
	}

	printf("\nOriginal array values: ");   //printing original array
	for(int i=0;i<count;i++)
		printf("%d ",array[i]);
	printf("\n");

}

int main()
{
	int size, iter; //decalaration

	printf("Enter the size of the array : ");
	scanf("%d", &size);//Read size of array

	int arr[size];

	printf("Enter the %d elements\n",size);
	for (iter = 0; iter < size; iter++) //loop to store elements in array
	{
		scanf("%d", &arr[iter]);
	}

	print_sort(arr, size); //calling function
}
