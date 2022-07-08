//This program shows how tiny variable in union is stored in lsb of big variable.
//This program also shows the little endianess of the system
#include <stdio.h>
//#include <nope.c>

union test{
    int num;
    char a;
};

int main()
{
    union test one;
    one.num=0x11223344;
    char *ptr=&one.num;
    //one.a=0;
    
    printf("\nAddress is %llu and value is %x\n",ptr++,*ptr);
    printf("Address is %llu and value is %x\n",ptr++,*ptr);
    printf("Address is %llu and value is %x\n",ptr++,*ptr);
    printf("Address is %llu and value is %x\n\n",ptr,*ptr);
    
    printf("Address is %llu and value is %x\n",&one.a,one.a);
    printf("%llu\n",&one.a);
    printf("%x\n",one.a);
}
