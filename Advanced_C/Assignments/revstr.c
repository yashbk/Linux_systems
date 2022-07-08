/*
Name : Yashas B K
Date : 14-01-2022
Description : WAP to reverse the given string using recursive method
Sample input and output:
Enter a string : Hello World
Reverse string is : dlroW olleH
*/

#include <stdio.h>
#include <string.h>

//function prototype
void reverse_recursive(char *str, int ind, int len);

int main()
{
        char str[30];
        
        //prompt to get string
        printf("Enter a string : ");
        scanf("%[^\n]", str);
        
        //calculating length of string
        int len=strlen(str);
        
        //Calling function
        reverse_recursive(str, 0, len-1);
        
        //printing output
        printf("Reversed string is %s\n", str);
}

void reverse_recursive(char *str,int ind, int len){
    
        if(ind==len/2+1){
                return;
        }
        else{
            int j=len-ind;
            char temp;
            //swap logic
            temp=str[ind];
            str[ind]=str[j];
            str[j]=temp;
            ind++;
            
            //recursive calling
            reverse_recursive(str,ind,len);
        }
}
