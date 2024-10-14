#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b;
	char cal;
	printf("Enter the calculation: ");
	scanf("%d %c %d",&a,&cal,&b);
	if(cal=='+')
		printf("=%d",a+b);
	else if(cal=='-')
		printf("=%d",a-b);
	else if(cal=='/')
		printf("=%d",a/b);
	else printf("=%d",a*b);
	return 0;
}