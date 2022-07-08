#include <stdio.h>
#include <stdlib.h>

static int stat=0;

void print_matrix(int rows,int col,int **matrix);
        
int matrix_mul(int **mat_a, int mat_a_row, int mat_a_col, int **mat_b, int mat_b_row, int mat_b_col, int **result, int res_row, int res_col);
        
void Deallocate_memory(int **matrix);

void scan_values(int rows,int col,int **matrix);

int **memory_alloc(int row,int col,int **matrix);



//Main function
int main()
{
    
    
        //Declaration of matrices
        int **mat_a, **mat_b, **result;
        int mat_a_row=0,mat_a_col=0,mat_b_row=0,mat_b_col=0,res_row=0,res_col=0;

        //prompt to get matrix a details
        printf("Enter number of rows : ");
        scanf("%d",&mat_a_row);

        printf("Enter number of columns : ");
        scanf("%d",&mat_a_col);

        //Allocating matrix for matrix a
        mat_a = memory_alloc(mat_a_row,mat_a_col,mat_a);
        scan_values(mat_a_row,mat_a_col,mat_a);

		print_matrix(mat_a_row,mat_a_col,mat_a);

        //prompt matrix b details
        printf("Enter number of rows : ");
        scanf("%d",&mat_b_row);

        printf("Enter number of columns : ");
        scanf("%d",&mat_b_col);



        if(mat_a_row != mat_b_col){
            printf("Matrix multiplication is not possible\n");
            exit(1);
        }
        
        //Allocating memory for matrix b
        mat_b = memory_alloc(mat_b_row,mat_b_col,mat_b);
        scan_values(mat_b_row,mat_b_col,mat_b);

		print_matrix(mat_a_row,mat_a_col,mat_a);
        //res_row=mat_a_row;
        //res_col=mat_b_col;

        //Allocating memory for result matrix
        //result = memory_alloc(res_row,res_col,result);

        //Calling matrix multiplication function
        //matrix_mul(mat_a,mat_a_row,mat_a_col,mat_b,mat_b_row,mat_b_col,result,res_row,res_col);

        //Deallocate_memory(mat_a);
        //Deallocate_memory(mat_b);
        //Deallocate_memory(result);

}



void print_matrix(int rows,int col,int **matrix){
        printf("The values for %d x %d matrix\n",rows,col);
        for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                        printf("%d",matrix[i][j]);
                }
                putchar('\n');
        }
}

int matrix_mul(int **mat_a, int mat_a_row, int mat_a_col, int **mat_b, int mat_b_row, int mat_b_col, int **result, int res_row, int res_col){
        for(int k=0;k<res_row;k++){
                for(int l=0;l<res_col;l++){
                        for(int i=0;i<mat_a_row;i++){
                                for(int j=0;j<mat_a_col;j++){
                                        result[k][l]=mat_a[i][j]*mat_b[j][i];
                                }
                        }
                }
        }
        print_matrix(res_row,res_col,result);
}

void Deallocate_memory(int **matrix){
        free(matrix);
}

void scan_values(int rows,int col,int **matrix){
        printf("Enter the values for %d x %d matrix\n",rows,col);
        for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                        scanf("%d",&matrix[i][j]);
						//printf("yes");
                }
        }
}


int **memory_alloc(int row,int col,int **matrix){
        matrix = malloc(row*sizeof(int*));
        if(matrix != NULL)
        {
                for(int i=0;i<col;i++){
                    matrix[i]=malloc(col*sizeof(int));
                }
        }
        stat++;
        printf("Memory Allocated %d\n",stat);
        return matrix;
}
