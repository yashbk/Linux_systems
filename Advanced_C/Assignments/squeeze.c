/*
Name : Yashas B K
Date : 12/1/22
Description : Squeeze the character in s1 that matches any character in the string s2
Sample input and output:

Enter s1 : Dennis Ritchie
Enter s2 : Linux
After squeeze s1 : Des Rtche

 */

#include <stdio.h>

void squeeze(char *s, char *s2);//Prototype of function

int main()
{
	//declaration of strings
	char str1[30], str2[30]; 

	//reading string1
	printf("Enter string1:"); 
	scanf("%[^\n]", str1);

	//reading string2
	printf("Enter string2:");
	scanf("%s", str2);

	squeeze(str1, str2);//calling function

	printf("After squeeze s1 : %s\n", str1);// printig value


	return 0;
}


void squeeze(char *s, char *s2 )
{
	int i = 0, j = 0, k = 0;

	while (s2[k] != '\0')//loop to compare two strings for same charecters
	{
		for (i = j = 0; s[i] != '\0'; i++)
		{
			if (s[i] != s2[k])
			{
				s[j++] = s[i];
			}
		}
		k++;
		s[j] = '\0';
	}

}
