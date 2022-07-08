#include<stdio.h>
int main(){
	float num=2.5f;
	printf("%f",num);
	for(int i=31;i>=0;i--){
		printf("%d",num>>i&1);
	}
}
