#include <stdio.h>

void main(void)
{
	int i=5;
	
	int *pi=&i;
	char *pc=&i;
	
	printf("%i,%i,%i\n",i,*pi,*pc);
}