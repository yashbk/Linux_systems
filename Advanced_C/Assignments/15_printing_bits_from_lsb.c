/*
Name : Yashas B K
Date : 15-12-2021
Description : WAP to print 'n' bits from LSB of a number
Sample input and output:

Enter the number: 10
Enter number of bits: 12
Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 

*/

#include <stdio.h>

//Function definition
int print_bits(int num, int n){
    //Loop to print the bits
    for(n=n-1;n>=0;n--){
        printf("%d",num>>n & 1);
    }
}

int main()
{
    //declaration of variables
    int num, n;
    
    //Prompting and scanning inputs
    printf("Enter num, n :\n");
    //scanf("%d%d", &num, &n);
    
    //Checking whether n is less than 32
    if(n>sizeof(int)*8)
        n=sizeof(n)*8;


    printf("Binary form of %d:", num);

    //Calling the function
    print_bits(num, n);
 }