/*
Name: Yashas B K
Date: 24/11/2021
Classwork number: 1
Description: WAP to print pattern
*/

#include <stdio.h>

int main()
{
    int row_max=8;
    int column_max=11;
    for(int row=0;row<row_max;row++){
	for(int column=0;column<column_max;column++){
	    if(row==0 || row==7 ){
		printf("*");
	    }
	    else if(column==0 || column==5){
		printf("*");
	    }
	    else
		printf(" ");
	}
	printf("\n");
    }

    return 0;
}
