#include<stdio.h>
#include<stdlib.h>
//int enterArray
int main(){
	int arr[5]={4,3,1,2,5};
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		for(int j=i;j<5;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d",i[arr]);
	}
}
	
	
