#include"stdio.h"
int main(void)
{
	char ch,filename[20];
	FILE *fp;
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open this file\n");
		return 0;
	}
	while((ch=getchar())!='#')
	{
		fputc(ch,fp);
		putchar(ch);
	}
	fclose(fp);
	return 0;
} 