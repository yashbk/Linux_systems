/*
Name : Yashas B K
Date : 20-01-2022
Description : WAP to implement fragments using Array of Pointers
Sample input and output:

./fragmentsEnter
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1

Before sorting output is:

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

After sorting output is:

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333
 */

#include <stdio.h>
#include <stdlib.h>

int fragments(int, float**);

int main()
{
	int rows;
	float *ptr_row[rows];

	printf("Enter no. of rows : ");
	scanf("%d",&rows);

	fragments(rows,&ptr_row[3]);
}

int fragments(int rows, float *ptr_row[rows]){

	//declaration of variables
	int columns,j;
	float sum=0;
	int col[rows];
	float average[rows];


	//Allocating memory for columns dynamically
	for(int i=0;i<rows;i++){
		printf("Enter no. of columns in row[%d] : ",i);
		scanf("%d",&columns);
		col[i]=columns;

		ptr_row[i]=(float *)malloc(columns*sizeof(float)+1);
	}


	//Entering values to all rows
	for(int i=0;i<rows;i++){
		printf("Enter %d values for row[%d] : ",col[i],i);
		for(j=0;j<col[i];j++){
			scanf("%for",&ptr_row[i][j]);
		}
		for(int m=0;m<col[i];m++){
			sum += ptr_row[i][m];
		}
		ptr_row[i][j]=sum/col[i];
		average[i]=ptr_row[i][j];
		sum=0;
	}

	printf("Before sorting output is:\n");
	//printing values
	for(int i=0;i<rows;i++){
		for(int j=0;j<=col[i];j++){
			printf("%f ",ptr_row[i][j]);
		}
		putchar('\n');
	}

	//Allocating memory dynamically for temp variable
	float *temp=(float*)malloc(sizeof(float*));
	int tem;


	//Sorting mechanism
	for(int i=1;i<rows;i++){
		for(int l=0;l<rows;l++){
			if(average[l]>average[i]){
				temp=ptr_row[i];
				ptr_row[i]=ptr_row[l];
				ptr_row[l]=temp;
				tem=col[i];
				col[i]=col[l];
				col[l]=tem;
			}

		}
	}
	printf("After sorting output is:\n");

	//printing values
	for(int i=0;i<rows;i++){
		for(int j=0;j<=col[i];j++){
			printf("%f ",ptr_row[i][j]);
		}
		putchar('\n');
	}

	free(ptr_row[3]);
	free(temp);
	return 0;
}
