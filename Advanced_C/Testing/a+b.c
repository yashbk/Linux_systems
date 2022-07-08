/*
Name : Yashas B K
Date : 13/12/21
Description : WAP to put the (b-a+1) lsb’s of num into val[b:a]
Sample i/p &o/p:
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
Result : 158
 */


#include <stdio.h>

int replace_nbits_from_pos(int num, int a, int b, int val)
{

	int result=0, i;

	// checking the condition whether a &b not greater than 31
	if(b>=a&&b<=31)
	{
		num=num&((1<<a)-1); //get n_bits from LSB
		a=b-a+1;

		for (i=b;i>=a;i--)
		{
			val=val&(~(1<<i)); //to clear n bits
		}

		return val|num<<a; //returning the value
	}	

}


int main()
{
	int num, a, b, val, res = 0;

	//Reading the value of num,a,b,val from users

	printf("Enter the value of 'num': ");
	scanf("%d",&num);

	printf("Enter the value of 'a':");
	scanf("%d",&a);


	printf("enter the value of 'b':");
	scanf("%d",&b);



	printf("Enter the value of 'val':");
	scanf("%d",&val);

	//	printf("Enter num, a, b, and val:");
	// scanf("%d%d%d%d", &num, &a, &b, &val);

	//calling function and passing parameters read
	res= replace_nbits_from_pos(num, a, b, val);

	printf("Result = %d\n", res); //printing result
}

