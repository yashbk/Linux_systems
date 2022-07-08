/* General formula to clear a bit according to the given position using and & bitwise operator

   */

#include<stdio.h>
int main()
{
	unsigned char num=255,mask;
	int pos;
	printf("Enter the position you want to clear\n");
	scanf("%d",&pos);
	mask=~(1<<pos);
	printf("The output after clearing a bit is: %d\n",num&mask);
}
