/* 
Name : Yashas B K
Date : 11/1/22
Description : WAP to count no. of characters, words and lines, entered through stdin
Sample i/p & o/p:
Hello world
Dennis Ritchie
Linux
o/p: Character count : 33
Line count : 3
Word count : 5
 */


#include<stdio.h>

int main()
{

	int cc=0,wc=0,lc=0;
	char ch;

	while((ch=getchar())!=EOF)
	{
		cc++; //charactar count

		if(ch ==' '||ch=='\t'||ch=='\n')
			wc++;  //word count

		if(ch=='\n')
			lc++; //line count
	}

	//Printing output

	printf("Charactar count: %d\n",cc);
	printf("Line count: %d\n",lc);
	printf("Word count:%d\n",wc);

	return 0;
}
