#include<stdio.h>
int main(){
	int num=0x12345;
	int *ptr=(int*)0x12345;
	printf("%d",*ptr);
	return 0;
}
