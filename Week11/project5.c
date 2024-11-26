#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	FILE*fp;
	fp=fopen("sample.txt","w");
	fprintf(fp,"Sookmyung\n");
	fprintf(fp,"Electrical\n");
	fprintf(fp,"Engineering\n");
	fclose(fp);
	
}