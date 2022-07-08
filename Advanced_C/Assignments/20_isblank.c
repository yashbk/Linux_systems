/*
   Yashas B K
   18/12/21
   WAP to implement your own isblank() function
   Sample i/p & o/p:
   Enter the character:    //Entered space
   The character ' ' is a blank character.
 */

#include <stdio.h>

int my_isblank(int ch) 
{

	//Function to check entered blank or not and return respective value
	if(ch==32 || ch==9)
		return 1;
	else
		return 0;
}

int main()
{

	//Declaration of variables
	char ch;
	int ret;

	//Reading character from user
	printf("Enter the character:");
	scanf("%c", &ch);

	ret = my_isblank(ch); //calling function

	if(ret==1) //Checking return value and printing output
		printf(" Entered character is a blank character ");

	else

		printf(" Entered character is not blank character ");

}
