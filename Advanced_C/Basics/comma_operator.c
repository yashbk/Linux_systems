/*
In assignment if there are number of value separated by comma inside a bracket then last one will be selected but others are evaluated and discarded
*/
#include <stdio.h>

int main()
{
	short x=0,y=0,z=0;
	int num1=(x=1+2,y=2+x,z=3+y);
	printf("%d",num1);
	return 0;
}
