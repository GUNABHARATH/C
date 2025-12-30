#include<stdio.h>
char removeint(char*);


int main()
{
char a[20];
char b[20];
printf("Enter the Two Strings:");
scanf("%s",a);
scanf(" %s",b);
char *x,*y;
x=a;
y=b;
printf("Before Removing:\n");
printf("A=%s\nB=%s\n",a,b);
printf("After Removing:\n");
x=removeint(a);
y=removeint(b);
printf("A=%s\nB=%s\n",a,b);
}

char removeint(char *p)
{       
	char *res;
     	int i,j=0;
	for(i=0;p[i];i++)
	{
		if(((p[i]>='A')&&(p[i]<='Z'))||((p[i]>='a')&&(p[i]<='z')))
			res[j++]=p[i];
	}
	res[i]='\0';

	strcpy(p,res);
	return p;
}
