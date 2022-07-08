#include<stdio.h>
#include<string.h>

void my_strcpy(char *dest, char *src){
	while(*src){
		*dest++ = *src++;
	}
	*dest = '\0';
}

int main()
{
	char *str = "good";
	strcpy(str,"hello world");
	printf("%s",str);	
}

