/*
Name : Yashas B K
Date : 07/11/21
Description: WAP to display the day from the day entered

Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
*/


#include <stdio.h>

int main()
{
        //variable declaration
        int Start_day,n,rem;

        //prompt to enter n
        printf("Enter the value of 'n':");
        scanf("%d",&n);

        //prompt to check proper days are entered
        if(n>0 && n < 365)
        {
                printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day: ");

                scanf("%d",&Start_day);

                if(n>7)
                {
                        rem=n%7;
                        Start_day = Start_day +(rem -1);
                }
                else if(Start_day==0||Start_day > 7)
                {
                        Start_day=0;
                }
                else
                {
                        Start_day+=(n-1);

                        if(Start_day>7){
                                rem = Start_day%7;
                                Start_day=rem;
                        }
                }

                switch(Start_day)       //Switch statement to print day
                {
                        case 1:
                                printf ("The day is Sunday");
                                break;
                        case 2:
                                printf ("The day is Monday");
                                break;
                        case 3:
                                printf ("The day is Tuesday");
                                break;
                        case 4:
                                printf ("The day is Wednesday");
                                break;
                        case 5:
                                printf ("The day is Thursday");
                                break;
                        case 6:
                                printf ("The day is Friday");
                                break;
                        case 7:
                                printf ("The day is Saturday");
                                break;
                        default:
                                printf("Error: Invalid input, first day should be > 0 and <= 7\n");
                }
        }
        else
                printf("Error: Invalid Input, n value should be > 0 and <= 365\n");

        return 0;
}
