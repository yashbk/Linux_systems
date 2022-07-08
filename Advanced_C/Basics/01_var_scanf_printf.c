/*
This code shows basic declaration of variables,printf and scanf statements
comments
*/
#include <stdio.h>
int main(){
    
   printf("Enter a integral number\n");
   int num=0;
   scanf("%d",&num);
    printf("The number is %d\n",num);
    printf("\n");

    printf("Enter a character\n");
    char c;
    scanf("%c",&c);
    printf("The character is %c\n",c);
    printf("Char scanf works only if we scan it before other variable scan\n");
    printf("\n");

    printf("Enter a real number\n");
    float real;
    scanf("%f",&real);
    printf("The real number is %f\n",real);
    
    printf("\n");
    printf("Enter a reall number\n");
    double reall;
    scanf("%lf",&reall);
    printf("The reall number is %lf\n",reall);

}
