/*
Name: Yashas B K
Date:18/12/21
Description: WAP to implement your own ispunct() function
Sample i/p or o/p:
Enter the character: a
Entered character is not punctuation character.
*/


#include <stdio.h>

int my_ispunct(int ch)
{

	//Checkig ch is punctuation or not 
	if(ch>=33 && ch<=47 | ch>=58 && ch<=64)
		return 1;
	else
		return 0;
}

int main()
{
	char ch; // declaration of variable
	int ret;

	printf("Enter the character:"); //Reading charecter from user
	scanf("%c", &ch);

	ret = my_ispunct(ch); //Calling function

	if(ret==0) //Checking return value and printing result
		printf("Entered character is not punctuation character");
	else
		printf("Entered character is punctuation character");
	return 0;
}
