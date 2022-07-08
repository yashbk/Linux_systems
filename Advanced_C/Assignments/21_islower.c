/*
   Yashas B K 
   18/12/21
   WAP to implement your own islower function
   Sample i/p or o/p:
   Enter the character: a
   The character 'a' is lower case alphabet.
 */


#include <stdio.h>

int my_islower(int ch) //function to check whether the input  is lowercase alphabet or not
{

	//Checkig ch is lower case
	if(ch>= 97 && ch <= 122 )
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

	ret = my_islower(ch); //Calling function

	if(ret==0) //Checking return value and printing result
		printf(" Entered character is not lower case  alphabet");
	else
		printf("Entered  character is lower case alphabet");
	return 0;
}
