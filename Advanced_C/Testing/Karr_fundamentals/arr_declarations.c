#include<stdio.h>
int main(){
	int N=5;
	//int ar1[];            Not allowed
	int ar2[3];
	int ar3[]={1,2,3,4,5};
	int ar4[4]={1,2,3,4};
	int ar5[N];
	//int ar6[N]={1,2,3,4,5};		Not allowed
	ar5[0]=1;
	ar5[1]=2;
}
