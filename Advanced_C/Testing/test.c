#include<stdio.h>
void main(){
	int num=20;
	int *ptr1=&num;
	int **ptr2=&ptr1;
	printf("ptr1 value is: %d\n",*ptr1);
	printf("ptr2 value is: %d\n",**ptr2);
}
