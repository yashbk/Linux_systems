/*
Name: Yashas B K
Date: 20/01/2022
Description: Variance calculation with dynamic arrays
Sample execution: -
Test Case 1:./variance
Enter the no.of elements : 10

Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 2

[7] -> 24
[8] -> 26
[9] -> 31
Variance is 40.000000

*/
#include <stdio.h>
#include <stdlib.h>

//Function prototype
float variance(int *, int); 
int main()
{
	//Variable declaration
    int num;       
    float num1;

	//Prompting user to get number of elements
    printf("Enter the no.of elements : ");
    scanf("%d",&num);

	//Dynamic memory allocation
    int *arr=malloc(num*sizeof(int));   
    printf("Enter the %d elements:\n",num);  
    for(int i=0; i<num; i++)   //Reading the array elements from user
    {
        printf("[%d]-> ",i);
        scanf("%d",&arr[i]);
    }
    
    num1=variance(arr,num);  // Funtion call
    printf("Variance is %f\n",num1); //Printing the variance

	free(arr);
}
float variance(int *arr, int num)  //Funtion defination
{
	//Variable definition
    int sum=0,sum1=0;
	float mean=0,sigma=0;  

    for(int i=0; i<num; i++)   //To calculate the sum of all elements
    {
        sum=sum+arr[i];
    }
    mean=sum/num;   //Calculating the mean

    for(int j=0; j<num; j++)  //Calculating the D=num-mean, D^2 and sum1 of D^2
    {
        arr[j]=arr[j]-mean;   //D
        arr[j]=arr[j]*arr[j]; //D^2
        sum1=sum1+arr[j];     //sum1
    }
    sigma=(float)sum1/num;      //Calculating the Variance

    return sigma;    //Returning to main Funtion
    
}
