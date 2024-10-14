#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int answer=50,trial=0,n;
	do
	{
		printf("Guess a number: ");
		scanf("%i",&n);
		trial++;
		if(n>answer)
		{
			printf("High!\n");
		}
		else if(n<answer)
		{
			printf("Low!\n");
		}
		else if(n==answer)
		{
			printf("Congratulation! ");
			break;
		}
	}
	while(1);
	printf("Trials:%d",trial);
	return 0;
}