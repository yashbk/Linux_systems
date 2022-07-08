/*WAP to print grade as per the percentage entered
Name: Yashas B K
Date: 16/11/21
 */	

#include<stdio.h>
int main(){
    float percentage;
    printf("Enter the percentage\n");
    scanf("%d",&percentage);
    if(percentage <50)
	printf("Grade is Fail\n");
    else if(percentage >= 50 && percentage <75)
	printf("Grade is B+\n");
    else if(percentage >= 75 && percentage <90)
	printf("Grade is A\n");
    else if(percentage >= 90 && percentage <=100)
	printf("Grade is A+\n");
    else
	printf("Enter a valid percentage\n");
}
	
