#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int n1,n2;
	printf("Input two integers:");
	scanf("%d %d",&n1,&n2);
	printf("+ result is %d\n",n1+n2);
	printf("- result is %d\n",n1-n2);
	printf("* result is %d\n",n1*n2);
	printf("/ result is %d\n",n1/n2);
	printf("%% result is %d\n",n1%n2);
	return 0;
}