#include <stdio.h>
#include <stdlib.h>


#define PI 2

struct Class{
struct {	
	int age;
};
};

int main(){
	//Hi macha how are you

#if 1
	printf("\n");
#elif defined(GOOD)
	printf("good defined");
#else
	printf("Not defined");
#endif

	struct Class A;
	A.age=20;
	printf("%d\n",A.age);
//	printf("%p\n",s1);


}
