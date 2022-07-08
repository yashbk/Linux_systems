//Program to calculate sum of any digits of numbers

#include <stdio.h>

int main()
{
    long long num = 99999999999;
    int sum = 0;
    while(num != 0)
    {
        sum = sum + num%10;
        num = num/10;
        if( num == 0 && sum > 9)
        {
            num = sum;
            sum = 0;
        }
    }
    printf("%d",sum);
    return 0;
}
