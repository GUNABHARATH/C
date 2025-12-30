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
        char ch;
        FILE*f = fopen("Sample.txt","w");
        FILE*p = fopen("strcpy.txt","r");
        while((ch=fgetc(p))!=EOF)
        {
                fputc(ch,f);
        }
	int i=remove("strcpy.txt");
	fclose(f);
        fclose(p);
}
