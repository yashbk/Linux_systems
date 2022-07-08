/*
Name : Yashas B K
Date : 08-01-2022
Description : WAP to print positive fibonacci series upto limiit using recursion
Sample input and output:
Enter a number: 8
0, 1, 1, 2, 3, 5, 8
 */
#include<stdio.h>

void positive_fibonacci(int, int, int, int);        //function prototype

int main()
{
	int limit=0;  //variable definition

	//prompt to get limit from user
	printf("Enter a limit : ");
	scanf("%d", &limit);

	// Input validation
	if(limit>=0){
		positive_fibonacci(limit, 0, 1, 0);
	}
	else
		printf("Invalid Input\n");
}

//function definition
void positive_fibonacci(int limit,int a,int b,int c){

	if(c>=limit){
		printf("%d",c);
		if(c==1){
			printf(", %d",c);
		}
		printf("\n");
		return;
	}
	else{
		printf("%d, ",c);
		//fibonacci logic
		a=b;
		b=c;
		c=a+b;
		if(c<=limit){
		positive_fibonacci(limit,a,b,c);   //recursive calling
		}
	}

}
