/*

Name : Yashas B K
Date :  20-01-2022
Description : WAP to define a macro SIZEOF(x), without using sizeof operator
user@emertxe] ./sizeof
Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double : 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes

 */

#include<stdio.h>
#include<stdlib.h>
#define sizeof_var(a) (size_t)(&a+1)-(size_t)(&a) //definition of macro


int main()
{
	//variable declaration of diffrent types
	int a;
	char ch;
	double x;
	float y;
	unsigned int i;
	long int b;

	//Printing size
	printf("Size of int %ld\n",sizeof_var(a));
	printf("Size of char %ld\n",sizeof_var(ch));
	printf("Size of float %ld\n",sizeof_var(y));
	printf("Size of double %ld\n",sizeof_var(x));
	printf("Size of unsigned int %ld\n",sizeof_var(i));
	printf("Size of long int %ld\n",sizeof_var(b));
	return 0;



}
