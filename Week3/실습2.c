#include <stdio.h>

int main(void)
{
	char c;
	int i;
	printf("input a number: ");
	scanf("%c",&c);
	i=c-48;
	printf("The integer number is %i\n",i);
	
	return 0;
}