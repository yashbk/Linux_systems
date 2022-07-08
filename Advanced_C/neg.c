/*
Name : Yashas B K
Date : 09-01-2022
Description : WAP to print negative fibonacci series upto limiit using recursion
Sample input and output:
Enter a number: -8
0, 1, -1, 2, -3, 5, -8,
 */
#include<stdio.h>

void negative_fibonacci(int, int, int, int);        //function prototype

int main()
{
	int limit=0;  //variable definition

	//prompt to get limit from user
	printf("Enter a limit : ");
	scanf("%d", &limit);

	// Input validation
	if(limit<=0){
		negative_fibonacci(limit, 0, 1, 0);
	}
	else
		printf("Invalid Input\n");
}

//function definition
void negative_fibonacci(int limit,int a,int b,int c){

	int d;
	printf("%d, ",c);

	//fibonacci logic
	a=b;
	b=c;
	c=a-b;
	
	if(c>0)
		d=-c;
	else
		d=c;

	if(d>=limit){
		negative_fibonacci(limit,a,b,c);   //recursive calling
	}
	else{
		printf("\n");
		return;
	}
}

