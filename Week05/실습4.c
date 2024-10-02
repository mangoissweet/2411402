#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int year;
	
	printf("Input the year: ");
	scanf("%d",&year);
	printf("Is the year %d the leap year? ",year);
	printf("%d",year%4==0&&year%4!=0||year%400==0);
	
	return 0;
}