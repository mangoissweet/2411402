#include <stdio.h>

int main(void)
{
	int i,j,sum;
	int grade[5];
	int *ptr=grade;
	sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("Input value - grade[%i] = ",i);
		scanf("%d",&grade[i]);
	}
	
	for(j=0;j<5;j++)
	{
		sum+=grade[j];
		printf("grade[%i] = %i\n",j,*ptr);
		ptr++;
		
	}
	
	printf("average: %i",sum/=5);
	
	return 0;
}

