/* 
Name : Yashas B K
Date : 20-01-2022
Description : WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample input and output:
 ./swap
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1

Enter the num1 : 10
Enter the num2 : 20
After Swapping :
num1 : 20
num2 : 10
*/
#include<stdio.h>
#include<stdlib.h>
#define SWAP_type(type,a,b)\
	type swap_temp;\
	swap_temp=b;\
	b=a;\
	a=swap_temp;\

int main()//driver function
{
	int ch;//declartion to get choice from user

	printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\nEnter you choice : ");
	scanf("%d",&ch);//read choice 

	switch(ch) //switch case accodring to user need for diffrent datatype
	{

		case 1 : {
					 int a, b;
					 printf("Enter the value of a & b:\n");
					 scanf("%d%d",&a,&b);
					 SWAP_type(int,a,b)
						 printf("After SWAP :\na : %d\nb : %d\n",a,b);
					 break;
				 }


		case 2:
				 {
					 char x,y;
					 printf("Enter the character value of x & y :");
					 scanf(" %c %c",&x,&y);
					 SWAP_type(char,x,y);
					 printf("After SWAP :\nx : %c\ny : %c\n",x,y);

					 break;

				 }
		case 3: {
					short int i,j;
					printf("Enter the value of i & j :\n");
					scanf("%hd%hd",&i,&j);
					SWAP_type(short,i,j);
					printf("After swap : i=%hd\nj=%hd\n",i,j);
					break;
				}
		case 4: {
					float o,p;
					printf("Enter the value of o & p :\n");
					scanf("%f%f",&o,&p);
					SWAP_type(float,o,p);
					printf("After swap: o=%f\np=%f\n",o,p);
					break;
				}
		case 5: {
					double m,n;
					printf("Enter the value of m & n:\n");
					scanf("%lf %lf",&m,&n);
					SWAP_type(double,m,n);
					printf("After swap:\nm : %lf\nn : %lf\n",m,n);
					break;
				}
		case 6:{
				   char *s1; 
				   char *s2;
				   s1=(char*)malloc(sizeof(char)*30);
				   s2=(char*)malloc(sizeof(char)*30);
				   printf("Enter the strings a & b:\n");
				   scanf("%s%s",s1,s2);
				   SWAP_type(char*,s1,s2);
				   printf("After Swap :\ns1 : %s\ns2 : %s\n",s1,s2);
				   break;
			   }
		default: printf("Enter valid choice:\n");

	}

	return 0;

}
