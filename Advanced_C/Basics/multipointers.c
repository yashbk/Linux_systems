#include<stdio.h>
int main(){
	int num=20;
	int *ptr=&num;
	int **ptr1=&ptr;
	printf("%p\n",ptr);
	printf("%p",ptr1);
}
