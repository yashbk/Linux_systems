#include<stdio.h>
int square(int,int);
int main(){
	printf("Enter two numbers: ");
	int a,b;
	scanf("%d%d",&a,&b);
	int result=square(a,b);
	printf("The result is: %d\n",result);
	return 0;
}

int square(int a,int b){
	return a*b;
}


