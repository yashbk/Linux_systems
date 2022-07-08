#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr=malloc(4);
	//*ptr=1;
	printf("%d",*ptr);
	free(ptr);
	printf("%d",*ptr);
}

