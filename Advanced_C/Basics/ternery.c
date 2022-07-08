//Highest of three number using ternery operator

#include <stdio.h>
int main()
{
	int num1=100,num2=100,num3=100;
	//scanf("%d %d %d",&num1,&num2,&num3);
	(num1!=num2 && num1!=num3)?(num1>num2?(num1>num3?printf("Num1 is greater\n"):printf("Num3 is greater")):(num2>num3?printf("Num2 is greater"):printf("Num3 is greater"))):printf("All are same");

	return 0;
}

