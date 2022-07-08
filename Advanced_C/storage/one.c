#include<stdio.h>
int num=20;

void two(void);
void three(void);
int main(){
	printf("Called from one\n");
	two();
	three();
	return 0;
}
