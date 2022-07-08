/* This program will show how to use switch statements
   */

#include<stdio.h>
int main()
{
    int num=7;

    switch ( num )
    {
	case 1:
	    printf("case 1 printed");
	    printf("\n");
	    break;
	case 2:
	    printf("case 2 printed");
	    printf("\n");
	    break;
	case 3:
	    printf("case 3 printed");
	    printf("\n");
	    break;
	case 'a':
	    printf("case a printed");
	    printf("\n");
	    break;
	case 32:
	    printf("case 3.2 printed");
	    printf("\n");
	    break;
	case 6 ... 9:
	    printf("case 6 to 9 printed");
	    printf("\n");
	    break;
    }
}
