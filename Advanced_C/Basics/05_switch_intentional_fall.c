//This program how to use switch efficiently when the output is same for several inputs

#include<stdio.h>
int main(){
    char vowel;
    printf("Please enter an alphabet to check whether it is vowel or not\n");
    scanf("%c",&vowel);
    switch(vowel){
	case 'a':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'i':
	case 'o':
	case 'u':
	    printf("It is a vowel\n");
	    break;
	default:
	    printf("It is not a vowel\n");
    }
}

