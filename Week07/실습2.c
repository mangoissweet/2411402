#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b)
{
	int result;
	result=a+b;
	return result;
}

int square(int n)
{
	int result;
	result=n*n;
	return result;
}

int get_max(int x,int y)
{
	int result;
	if(x>=y)
	{
		result=x;
	}
	else result=y;
	return result;
}

int main(void)
{
	int n1,n2;
	printf("Enter the integers: ");
	scanf("%d %d",&n1,&n2);
	printf("Result - Sum: %d, Square: %d, Max: %d",sumTwo(n1,n2),square(n1),get_max(n1,n2));
	
	return 0;
}