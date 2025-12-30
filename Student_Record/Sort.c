#include"header.c"

void sort(ST*ptr)
{
	if(ptr==0)
        {
                printf(" No Data Found/Available to Modify..........\n");
                return;
        }
	ST *temp;
	temp=ptr;
	char c;
	int i=0,j=0,k=0,h=highroll,l[h],l1,t,o;
	float a[h],y;
	char s[h][20],cp[20];
	float f1,f2;
	printf(" ____________________________________________ \n");
	printf("|    Enter                                   |\n");
	printf("|       N/n : Sort with Name                 |\n");
	printf("|       P/p : Sort with Percentage           |\n");
	printf("|____________________________________________|\n");
	printf("  Enter Your Choice:");
	scanf(" %c",&c);
	if((c=='P')||(c=='p'))
	{
	
                 while(ptr!=0)
		 {
			 f1=ptr->marks;
			 a[i]=f1;
			 l1=ptr->roll;
			 l[i++]=l1;
			 ptr=ptr->next;
			 k++;
		 }

		 for(i=0;i<k;i++)
		 {
			 for(j=i+1;j<k;j++)
			 {
				 if(a[i]<a[j])
				 {
                                    t=l[i];y=a[i];
				    l[i]=l[j];a[i]=a[j];
				    l[j]=t;a[j]=y;
				 }
			 }
		 }
		 printf("\n");
		 printf(" _________________________________________ \n");
	         printf("|       STUDENTS  DATABASE                |\n");
                 printf("|_________________________________________|\n");	
                 printf("|RollNo    Name            Marks          |\n");
                 printf("|_________________________________________|\n");
		 for(o=0;o<k;o++)
		 {
		    ptr=temp;
	            while((ptr!=0)&&(ptr->roll!=l[o]))
		       {
                          ptr = ptr->next;
	               }	      
		    printf("|%4d    |   %-11s|       %8.2f  |\n",ptr->roll,ptr->name,ptr->marks);
		 }
                 printf(" _________________________________________ \n");		 
                 printf("\n        The Record is Shorted\n\n");
                 return;
	}
	if((c=='N')||(c=='n'))
	{
		i=0,j=0;
		ptr=temp;
                 while(ptr!=0)
		 {
			 strcpy(s[i],ptr->name);
			 ptr=ptr->next;
			 i++;
		 }
		 for(i=0;i<n;i++)
		 {
			 for(j=i+1;j<n;j++)
			 {
				 k=strcmp(s[i],s[j]);
				 if(k>0)
				 {
					 strcpy(cp,s[i]);
					 strcpy(s[i],s[j]);
					 strcpy(s[j],cp);
				 }
			 }
		 }
                 printf(" _________________________________________ \n");
                 printf("|       STUDENTS  DATABASE                |\n");
                 printf("|_________________________________________|\n");       
                 printf("|RollNo    Name            Marks          |\n");
                 printf("|_________________________________________|\n");
		 for(i=0;i<n;i++)
		 {
	         ptr = temp;
		 while((ptr!=0)&&(strcmp(s[i],ptr->name)!=0))
		 {
			 ptr = ptr->next;
		 }
	            printf("|%4d    |   %-11s|       %8.2f  |\n",ptr->roll,ptr->name,ptr->marks);
		 }
                    printf("        The Record is Shorted\n\n");		 
	            return;
	}
	else
	{
		printf("              Invalid Input      \n");
	}
}
