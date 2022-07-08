/*
   String declaration
   */

#include<stdio.h>
int main(){
	char one[6]={'h','e','l','l','o','\0'};
	one[0]='j';
	char two[]={'h','e','l','l','o','\0'};   
	char three[6]={"h""e""l""l""o"};
	char four[6]={"hello"};
	char five[]="hello";
	char six[6]="hello";
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",one,two,three,four,five,six);
}

