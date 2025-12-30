#include<stdio.h>
#include<string.h>

int main(int argc,char**argv)
{
	char a[100];
	FILE*fp = fopen("Sample.txt","r");
	FILE*pf = fopen("strcpy.txt","w");
	while(fscanf(fp,"%s",a)!=EOF)
	{
		if(strcmp(a,argv[1])==0)
		{
			fprintf(pf,"%s ",argv[2]);
		}
		else
			fprintf(pf,"%s ",a);
	}
	fclose(fp);
	fclose(pf);
}

