#include <stdio.h>
int main()
{
    char confirmation;
    char c;
    while(1)
    {
	printf("Enter a character\n");
	scanf(" %c",&c);    //having space before %c will make scanf work
	printf("Output %c\n",c);
	printf("Do you want to continue(y/n)\n");
	scanf(" %c",&confirmation); //having space before %c will make scanf work 
	printf("you entered %c\n",confirmation);
	if(confirmation == 'n')
	    break;
    }
    return 0;
}
