#include<stdio.h>
int main()
{
	int i,a[10],n,j,t,l;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(10);i++)
	{
		for(j=0;j<(10-i);j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}	
		}		
	}
	for(l=0;l<10;l++)
        {
                printf("%d ",a[l]);
        }

}
