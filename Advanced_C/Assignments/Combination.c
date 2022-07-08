/*
Name : Yashas B K
Date : 02-02-2022
Description : WAP to print all possible combinations of given string.
Sample i/p &o/p:
Enter a string: abc
All possible combinations of given string :abc
acb
bca
bac
cab
cba

 */

#include <stdio.h>

void combination(char *str , int len, int k)
{
	int i, val = 0, count = 0;

	printf("All possible combinations of given string :%s\n ",str);
	for (i = 0; i < len; i++)
	{
		if(i%k == 0 && i != 0)
		{
			val++;
		}
		printf("%c", *(str+((i+val)%k)));
	}
}


int my_strlen(char *str)
{
	int i,count;
	count=0;

	for(i=0;str[i]!='\0';i++)
		count++;
	return count;
}

int main()
{
	int n=3,i,k=1;
	char string[30];

	printf("Enter a String: \n");
	scanf("%s",string);
	n = my_strlen(string);

	//factorial is for distinct string combination 
	for(i=1;i<=n;i++)
	{
		k=k*i;

	} 
	// printf("main len=%d,    fact=%d",n,k);

	//check for distinct char
	for (i = 0; i < n; i++)
	{
		for (int j = (i+1); j < k; j++)
		{
			if(string[j] == string[i] )
			{
				printf("Error: Enter distinct characters\n");
				return 1;
			}
		}
	}
	combination(string, k, n);
	return 0;
}
