#include<stdio.h>
void swap(int *,int *);
int main(){
	int a,b;
	printf("Enter the numbers a and b: ");
	scanf("%d%d",&a,&b);
	printf("Numbers before swaping a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("Numbers after swaping a=%d b=%d\n",a,b);
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

