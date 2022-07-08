/*WAP to check whether character is 
  -upper case
  -lower case
  -digit
  -none of the above
  */

#include<stdio.h>
int main(){

    printf("Enter a number or alphabet\n");
    char value;
    scanf("%c",&value);
    if( value >= 48 && value<=57)
	printf("It is a number\n");
    else if(value >=65 && value <= 90)
	printf("It is a upper case letter\n");
    else if(value >=97 && value<=122)
	printf("It is a lower case letter\n");
    else
	printf("You have entered a wrong input\n");
}
