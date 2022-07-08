/*
Name : Yashas B K
Date : 20-01-2022
Description : Wap to implement itoa function
Sample i/p: Enter the number: 1234
Sample o/p: Entered string is:1234
 */


#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int itoa(int num, char *str)// implementing itoa function
{


	int i = 0; //declartion
	int flag=0;

	/* Handle 0 explicitly, otherwise empty string is printed for 0 */
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
	}

	if (num < 0)
	{
		flag=1;
		num = -num;
	}
	//condition to avoid alphabet in number  
	if (num>=97&&num<=122 ||num>=65 && num<=90)
		return 0;
	else
		// Process individual digits and copy to string
		while (num != 0)
		{

			int rem = num % 10;
			str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
			num = num/10;

		}    
	// If number is negative, append '-'
	if (flag)
		str[i++] = '-';

	str[i] = '\0'; // Append string terminator


	// reverse the string using iteration


	int k,n,j;
	char ch;
	n=strlen(str);
	k=0;
	j=n-1;

	while(str[k]!='\0') //Reversing loop

	{
		if(k!=n/2)  //Reversing string
		{

			ch=str[k];

			str[k]=str[j];


			str[j]=ch;

			k++;
			j--;

		}

		else
		{
			break;
		}


		str[n]='\0';
	}
}

int main()
{
	int num;//declartion f variables
	char str[10];
	int i;
	printf("Enter the number:");
	scanf("%d", &num); //reading integer

	i= itoa(num, str);//calling function

	if(i==0)//cheacking condition of return value
		printf("Integer to string is %d",i);
	else
		printf("Integer to string is %s", str);
}
