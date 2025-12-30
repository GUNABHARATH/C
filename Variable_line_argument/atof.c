#include<stdio.h>
float my_atof(const char *p);
int main(int argc,char **argv)
{
	float x;
	if(argc!=2)
	{
		printf("Usage : ./a.out float\n");
		return 0;
	}
	x=my_atof(argv[1]);
	printf("x=%f\n",x);
}

float my_atof(const char *p)
{
	int i=0,sum1=0;
	float f=0.1,sum2=0;
	if((p[i]=='-')&&(p[i]=='+'))
		i=1;
	for(;p[i]!='.';i++)
	{
		if((p[i]>='0')&&(p[i]<='9'))
			sum1=sum1*10+(p[i]-48);
		else
			break;
	}
	for(i=i+1;p[i];i++,f=f*0.1)
	{
		if((p[i]>='0')&&(p[i]<='9'))
			sum2=sum2+(f*(p[i]-48));
		else
			break;
	}
	if(p[0]=='-')
		return -sum1+sum2;
	else
		return sum1+sum2;
}

