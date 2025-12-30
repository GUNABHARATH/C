#include<stdio.h>
#include<string.h>
char *my_strncpy(const *,const *,int);
int main()
{
	char s[20],d[20];
	int n;
	printf("Enter the source\n");
	scanf("%s",s);
	printf("Enter the N value\n");
	scanf("%d",&n);

	//char *p = strncpy(d,s,n);
	char *p = my_strncpy(d,s,n);
	d[n] = '\0';

	printf("d = %s\n",d);
	printf("p = %s\n",p);
}
char *my_strncpy(const *p,const *q,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		p[i]=q[i];
	}
		return p;
}
