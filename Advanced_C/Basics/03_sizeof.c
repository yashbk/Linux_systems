//This program shows the sizeof operator and it's usage with format specifier
//All these values are compiler dependent and system dependent too

#include <stdio.h>

int main()
{
        
    	printf("All these values are compiler dependent and system dependent as well\n");
        float c;
	    //scanf("%f",&c);
	    printf("float size=%zu bytes\nint size=%zu bytes \nchar size=%zu bytes\ndouble size=%zu bytes\n",sizeof(float),sizeof(int),sizeof(char),sizeof(double));
	    printf("short int size=%zu bytes\nlong int size=%zu bytes \nlong long int size=%zu bytes\nlong double size=%zu bytes\n",sizeof(short),sizeof(long),sizeof(long long),sizeof(long double));
	        

	        return 0;
}
