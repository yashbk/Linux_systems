#include<stdio.h>
int input_array(int *A,int *ele){
	printf("Enter %d values\n",*ele);
	for(int i=0;i<*ele;i++){
		scanf("%d",&A[i]);
	}
	return 0;
}

int bubbleSort(int *arr,int *size){
	for(int i=0;i<*size;i++){
		for(int j=i;j<*size;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int print_array(int *A,int *ele){
	printf("Elements of array are\n");
	for(int i=0;i<*ele;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}
float median(int *A,int *M){
	if(*M%2==0)
		return A[*M/2];
	else
		return (float)(A[*M/2]+A[*M/2+1])/2;	
}

int main(){
	int M,N;
	float mainmedian;
	printf("Print 'n' number for array 1:\n");
	scanf("%d",&M);
	printf("Print 'n' number for array 2:\n");
	scanf("%d",&N);
	int A[M];
	int B[N];
	printf("Enter values of array A:\n");
	input_array(A,&M);
	printf("Enter values of array B:\n");
	input_array(B,&N);
	printf("before sorting\n");	
	print_array(A,&M);
	bubbleSort(A,&M);
	printf("after sorting\n");	
	mainmedian=(median(A,&M)+median(B,&N))/2;
	printf("%f",mainmedian);
	print_array(A,&M);
	return 0;
}
