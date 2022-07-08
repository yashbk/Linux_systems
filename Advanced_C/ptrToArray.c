#include<stdio.h>

int print2d(int (*ptr)[3]){
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d",ptr[i][j]);
			}
		putchar('\n');
	}
}

int main(int count,char **str){
	printf("Number of arguments=%d\n",count);
	for(int i=0;i<count;i++){
		printf("%s\v\a",str[i]);
	}
	int arr[2][3]={1,2,3,4,5,6};
	int (*ptr)[3]=&arr;
	print2d(&arr);
	printf("%llu\n",ptr);
	printf("%llu\n",++ptr);
}
