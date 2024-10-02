#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int n1,n2;
	
	printf("Input two integers: ");
	scanf("%i %i",&n1,&n2);
	printf("& result is %i\n",n1&n2);
	printf("| result is %i\n",n1|n2);
	printf("^ result is %i\n",n1^n2);
	printf("<<1 result is %i\n",n1<<1);
	printf(">>1 result is %i\n",n1>>1);
	return 0;
}