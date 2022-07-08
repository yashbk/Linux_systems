#include<stdio.h>
int main(){
	int N;
	printf("Enter number of  elements of array\n");
	scanf("%d",&N);
	int arr[N];
	printf("Enter %d element of array:\n",N);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}

	//printing array
	for(int i=0;i<N;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
