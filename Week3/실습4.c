#include <stdio.h>

int main(void)
{
	float f_1, f_2;
	
	printf("enter two integers: ");
	scanf("%f,%f", &f_1, &f_2);
	printf("%f / %f = %f",f_1,f_2,f_1/f_2);
	
	return 0;
}