#include<stdio.h>
int print(int *arr){
	arr[3]=9;
	printf("%d",arr[3]);
}
int main(){
	int arr[5]={1,2,3,4,5};
	int *ptr=arr;
	printf("%d",3[ptr]);
	print(arr);
	//printf("%lu",sizeof(ptr));
//	printf("%lu",sizeof(arr));
//	printf("%lu",sizeof(&arr));
	printf("%d",3[ptr]);
}
