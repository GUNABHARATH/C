#include<stdio.h>
int rev(int,int);
int main()
{
	int i=5959;
	int r=rev(i,0);
	printf("Reverse : %d\n",r);
}
int rev(int x,int y)
{
 if(x<10)
	 return y+=x;
 else
	 y+=(x%10);
 return rev(x/10,y*10);
}

