/*
Name : Yashas B K
Date : 20-01-2022
Description : WAP to implement atoi function
Sample i/p: Enter a numeric string : +1234
Sample o/p: String to integer is 1234
 */


#include<stdio.h>
#include<stdlib.h>



int my_atoi(const char * str)
{

	//Declaration of variables
	int temp=0,flag=1; 	

	if(*str=='+'||*str=='-')//Condition checking for sign
	{
		flag=1-2*(*str=='-');
		str++;
	}

	while(*str > '0' && *str <'9')//Checking condition for numeric and excluding alphabet
	{
		temp=(temp*10)+(*str-48);
		str++;
	}
	return temp*flag;
}




int main()
{
	char str[20];//String declartion

	printf("Enter a numeric string : ");
	scanf("%s", str);//Read string

	printf("String to integer is %d\n", my_atoi(str));//printf the output string

}
