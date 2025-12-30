#include"header.c"
int no(ST*ptr)
{
	int i=1,j=1,z=0,k;
	int a[n+2];
	while(ptr!=0)
	{
		a[i] = ptr->roll;
		i++;
		ptr = ptr->next;
	}
	k=highroll;
         for(j=1;j<k;j++)
	 {
		 z=0;
		 for(i=1;i<k;i++)
		 {
                    if(j==a[i])
		    {
			    z++;}
		 }
		 if(z==0)
			 return j;

	 }
}
