#include<stdio.h>
int main(){
	int num[]={1,2,3,4,5};
	int second[]={6,7,8,9,10};
	int *ptr[2]={second,num};
	printf("%d",ptr[1][2]);
}
