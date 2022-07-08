/* General use of | bitwise operator to set a bit
   */

#include<stdio.h>
int main(){
	unsigned char num=0,mask;
	int pos;
	printf("Enter the position you want to set\n");
	scanf("%d",&pos);
	mask=1<<pos;
	printf("The value after setting required position is: %d ",num|mask);
}

