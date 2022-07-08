/*
Name : Yashas B K
Date : 13-01-2022
Description : WAP to replace each string of one or more blanks by a single blank
Sample i/p &o/p:
i/p: Enter the string with more spaces in between two words
Pointers     are               sharp     knives.
o/p: Pointers are sharp knives.
 */

#include<stdio.h>

void replace_blank(char *str)
{
	//Variable definition
	int i=0,j=0,k=0;

	//loop to convert tab to space
	while(str[i]!='\0'){
		if(str[i]=='\t'){
			str[i]=' ';
		}
		i++;
	}

	i=0; 

	//Loop to remove extra spaces
	while(str[i]!='\0')
	{
		j=k=i;
		while(str[j]==' ' && str[j+1]==' '){
			while(str[j]!='\0'){
				str[j]=str[k+1];
				j++;
				k=j;
			}
			k=j=i;
		}
		i=j;
		i++;
	}

}

int main()
{
	char str[100];
	printf("Enter the string with more spaces in between two words\n");
	scanf("%[^\n]", str);

	//calling function
	replace_blank(str);

	//printing function
	printf("%s\n", str);
}
