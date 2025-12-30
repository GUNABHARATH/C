#include<stdio.h>
int fact(int);
int main()
{
	int i=5;
	int r=fact(i);
	printf("Factorial(%d):%d\n",i,r);
}
int fact(int a)
{
	if((a==0)||(a==1))
		return 1;
	else
		return a*fact(a-1);
}
