

#include <stdio.h>
#define GREATER(a,b,c) (a>b)?(a>c)?printf("a is greater"):printf("c is greater"):(b>c)?printf("b is greater"):printf("c is greater")
#define SWAP(a,b,datatype) datatype temp;temp = a; a = b; b = temp
#define SWAPP(a,b) a = a + b;  b = a-b; a = a-b
#define SWAPxor(a,b) a=a^b; b=a^b; a=a^b;
int main()
{
    int A=10,B=2,C=1;
    GREATER(A,B,C);
    (A>B)?(A>C)?printf("A is greater"):printf("C is greater"):(B>C)?printf("B is greater"):printf("C is greater");
    int m=5,n=9;
    SWAP(m,n,int);
    printf("\nm is %d and n is %d",m,n);
    SWAPP(m,n);
    printf("\nm is %d and n is %d",m,n);
    SWAPxor(m,n);
    printf("\nm is %d and n is %d",m,n);
    putchar('\n');
    putchar('g');
    char y = getchar();
    putchar(y);
}
