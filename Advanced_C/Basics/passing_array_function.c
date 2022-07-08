#include<stdio.h>

int arrayPrint(int []);

int main(){
	int array[]={1,2,3,4,5,6};
	arrayPrint(array);
	return 0;
}

int arrayPrint(int array[]){
	int iter=0;
	for(iter=0;iter<6;iter++){
		printf("%d",array[iter]);
	}
	printf("\n");
}
