/*
Name : Yashas B K
Date : 13-01-2022
Description : WAP to implement getword function
Sample input and output :
Enter the string : Hello
You entered Hello and the length is 5
 */

#include <stdio.h>

//getword function definition
int getword(char *str) 
{
	int count=0;
	for (int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			break;
		}
		count++;
	}

	//to get first word in main
	str[count]='\0';
	return count;
}

int main()
{
	//Variable declaration
	int len = 0; 
	char str[100];

	printf("Enter the string : ");
	scanf(" %[^\n]", str);//Reading string

	len = getword(str);//Calling function

	printf("You entered %s and the length is %d\n", str, len);//printing o/p
}
