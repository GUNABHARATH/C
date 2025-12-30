#include<stdio.h>
int sod(int);
int main()
{
	int i=54321;
	int r=sod(i);
	printf("SumOfDigits : %d\n",r);
}
int sod(int n)
{
	if(n==0)
		return 0;
	else
		return((n%10)+sod(n/10));
}
