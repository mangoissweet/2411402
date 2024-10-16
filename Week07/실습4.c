#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int a)
{
	int res=1,i;
	for(i=1;i<=a;i++)
	{
		res*=i;
	}
	return res;
}

int combination(int a,int b)
{
	return factorial(a)/(factorial(a-b)*factorial(b));
}

int get_integer()
{
	int res;
	printf("Enter the value: ");
	scanf("%d",&res);
	return res;
}

int main(void)
{
	int n,r;
	n=get_integer();
	r=get_integer();
	printf("The result of C(%d,%d) is %d",n,r,combination(n,r));
}