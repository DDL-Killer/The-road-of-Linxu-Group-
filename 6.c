
#include<stdio.h>

#define INT_PTR int* 

typedef int* int_ptr;

int main()
{
    
	INT_PTR a, *b;

	int_ptr c,d;
	
	printf("sizeof a:%d\n", sizeof(a));
	printf("sizeof a:%d\n", sizeof(b));
	printf("sizeof a:%d\n", sizeof(c));
	printf("sizeof a:%d\n", sizeof(d));
	
	return 0;
}
