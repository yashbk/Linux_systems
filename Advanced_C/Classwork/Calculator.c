//Simple calculator using switch statements

#include<stdio.h>
int main(){
    printf("Enter first number, operator and second number\nUsage:2 + 3\n");
    float number1,number2,output;
    char operator;
    scanf("%f %c %f",&number1,&operator,&number2);

    switch(operator){
	case '+':
	    printf("The output is: ");
	    output=number1+number2;
	    printf("%f\n",output);
	    break;
	case '-':
	    printf("The output is: ");
	    output=number1-number2;
	    printf("%f\n",output);
	    break;
	case '*':
	    printf("The output is: ");
	    output=number1*number2;
	    printf("%f\n",output);
	    break;
	case '/':
	    printf("The output is: ");
	    output=number1/number2;
	    printf("%f\n",output);
	    break;

	default:
	    printf("Input is not valid\n");
    }
}


