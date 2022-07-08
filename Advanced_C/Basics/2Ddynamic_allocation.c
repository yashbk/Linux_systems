//Dynamic memory allocation of a 2D array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a;
    a = malloc(sizeof(int*) * 3);
    for(int i=0;i<3;i++){
        a[i] = malloc(sizeof(int)*4);
    }

for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d",a[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
