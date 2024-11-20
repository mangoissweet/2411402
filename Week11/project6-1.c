#include <stdio.h>
#include <string.h>

void main(void)
{
	FILE*fp=NULL;
	char c;
	fp=fopen("sample.txt","r");

	if(fp==NULL)
	{
		printf("cannot open file\n");
	}
	
	while((c=fgetc(fp))!=EOF)
	{
		putchar(c);
	}
	
	fclose(fp);
	
}