/*
Name : Yashas B K
Date : 11-01-2022
Description :WAP to reverse the given string using iterative method
Sample input and output :

Enter a string : EMERTXE
Reverse string is : EXTREME
*/

#include <stdio.h>
#include<string.h>

void reverse_iterative(char *str) //String reversing function
{ 

	int i,n,j;
	char ch;
	n=strlen(str);
	i=0;
	j=n-1;

	while(str[i]!='\0') 

	{
		if(i!=n/2)  //Reversing string
		{
			ch=str[i];
			str[i]=str[j];
			str[j]=ch;
			i++;
			j--;
		}
		else
		{
			break;
		}
		str[n]='\0';  //Adding null to the char array to make it string 
	}
}

int main()
{
	char str[30];//Declartion

	printf("Enter any string : ");
	scanf("%[^\n]", str); //Reading tsring

	reverse_iterative(str);//calling function and passing string in it

	printf("Reversed string is %s\n", str); //Printing string
}
