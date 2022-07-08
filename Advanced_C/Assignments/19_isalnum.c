/*
   Yashas B K
   18/12/21
   WAP to implement your own isalnum() function
   Sample i/p or o/p:
   Enter the character: a
   The character 'a' is an alnum character.
 */


#include <stdio.h>

int my_isalnum(int ch)
{

	//Checkig ch is alnum or not 
	if(ch>=48 && ch <= 57 || ch>=65 && ch <=90 || ch>=97 && ch <=122)
		return 1;

	else
		return 0;

}


int main()
{
	// declaration of variables
	char ch; 
	int ret;

	//Reading charecter from user
	printf("Enter the character:"); 
	scanf("%c", &ch);

	//Calling function
	ret = my_isalnum(ch);

	//Checking return value and printing result
	if(ret==0) 
		printf(" Entered character is not alphanumeric character");
	else
		printf("Entered  character is alphanumeric character");
	return 0;
}
