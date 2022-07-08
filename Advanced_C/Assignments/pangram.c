/*
Name : Yashas B K
Date : 14-01-2022
Description : WAP to check given string is Pangram or not 
Sample input and output:

Enter the string: The quick brown fox jumps over the lazy dog
The Entered String is a Pangram String

*/

#include <stdio.h>
#include<string.h>

//function prototype
int pangram (char *);

int main()
{
	//Defining an empty array
	char str[100]=" ";

	//prompting for the string from user
	printf ("Enter the string:");
	scanf ("%[^\n]", str);

	//Converting uppercase letters to lower case
	for(int i=0;i<100;i++){
			if(str[i]<97){
			str[i]=str[i]+32;
		}
	}	

	//calling the function
	pangram (str);

}

int pangram (char *str)
{
	//Declaring an array for validating alphabets
	short alphabet[26]={0,}, count = 0;

	//loop to validate and count alphabets
	for (int i = 0; i < 100; i++)
	{
		
		if (alphabet[str[i] - 97] != 1 && str[i]>=97 && str[i]<=122)
		{
			alphabet[str[i] - 97] = 1;
			count++;
		}
	}

	if (count == 26)
	{
		printf ("The Entered String is a Pangram String\n");
	}
	else
	{
		printf ("The Entered String is not a Pangram String\n");
	}
}

