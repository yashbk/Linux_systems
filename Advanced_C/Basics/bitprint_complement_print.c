/* 
Program to print bits and find two complement of negative numbers
*/

#include<stdio.h>
void bitprint(char);
void comp2(char);
int main(){
	char negative=-27;
	char positive=27;

	printf("The positive number is: ");
	bitprint(positive);

	printf("The negative number is: ");
	bitprint(negative);
	
	printf("The 2s complement of negative number is: ");
	comp2(negative);
}

void bitprint(char num){
	for(char i=7;i>=0;i--){
		printf("%d",num>>i&1);
	}
	printf("\n",num);
}

void comp2(char num){
	char Ones=~num;
	//printf("%x",Ones);
	char Twos=Ones+1;
	//printf("%x",Twos);
	for(char i=7;i>=0;i--){
		printf("%d",Twos>>i&1);
	}
	printf("\n");

}
