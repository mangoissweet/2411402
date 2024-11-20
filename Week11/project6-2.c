#include <stdio.h>
#include <stdio.h>
#include <string.h>

void main(void)
{
	FILE*fp=NULL;
	char arr[100];
	char *str;
	fp=fopen("sample.txt","r");

	if(fp==NULL)
	{
		printf("cannot open file\n");
	}
	
	while((str=fgets(arr,100,fp))!=NULL)
	{
		printf("%s",str);
	}
	
	fclose(fp);
	
}