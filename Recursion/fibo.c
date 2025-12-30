#include<stdio.h>
int fibo(int);
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
	int r=fibo(i);
	printf("Fibonacci : %d\n",r);
}
}

int fibo(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);

}

