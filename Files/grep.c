#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char**argv)
{
	if(argc!=3)
	{
		printf("Usage of Grep :\n");
		return 0;
	}
	
	FILE*fp = fopen(argv[2],"r");
	int biglinelength=0,count=0;
	char ch;
	if(fp==NULL)
	{
		printf("%s:File or Directory doesn't exist\n");
		return 0;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		count++;
		if(ch=='\n')
		{	if(biglinelength<count)
				biglinelength=count;
		
				count=0;
	
		}
	}

	rewind(fp);
	char *a=(char*)malloc(biglinelength*sizeof(char));
	while(fgets(a,biglinelength,fp)!=EOF)
	{
		if(strstr(a,argv[1])!=NULL)
				printf("%s",a);
	}

}
