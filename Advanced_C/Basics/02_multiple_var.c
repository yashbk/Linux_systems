/*This program shows how multiple variables can be scanned or printed from a single scan and print statement*/

#include <stdio.h>
int main(){

    int integral;
    float real;
    char letter;
    double doub;
    printf("Enter a integer, character and a real number with space in between\n");
    scanf("%d %c %f %lf",&integral,&letter,&real,&doub); //If you use space in betweel positional modifiers then only character can be read even if char is not scanned in first place
    printf("The value of letter is %c\nThe value of integral is %d\nThe value of real is %f\nThe value of doub is %lf\n",letter,integral,real,doub);
    return 0;
 
}
