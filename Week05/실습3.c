#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int input_time;
	printf("Input the second: ");
	scanf("%d",&input_time);
	printf("The time is %d : %d",input_time/60,input_time%60);
	return 0;
}