#include"header.c"

void delete(ST**ptr)
{
	ST *prev,*temp,*t;
	temp = *ptr;
	t=*ptr;
	if(temp==0)
	{
		printf(" There is No Data................\n");
		return;
	}
	int num;
	char d[20],g;
	printf(" _____________________________________________\n");
                printf("|   Enter                                     |\n");
                printf("|_____________________________________________|\n");
                printf("|    R/r : Rollno to Delete                   |\n");
                printf("|    N/n : Name to Delete                     |\n");
                printf("|_____________________________________________|\n");
                printf("     Enter your Choice to Delete:");
                scanf(" %c",&g);
		if((g=='R')||(g=='r'))
		{
	           printf("Enter the Rollno to Delete:\n");
	           scanf("%d",&num);
	           while(temp!=0)
	           {
		    if(temp->roll == num)
		    {
			if(temp == *ptr)
				*ptr = temp->next;
			else
				prev->next = temp->next;

			free(temp);
			n=n-1;
			printf("        Deleted a Record\n\n");
			return;
		    }
		    else
		    {
			prev = temp;
			temp = temp->next;
		    }
	          }
                   printf("        Deleted a Record\n\n");		   
		   return;
		}
              if((g=='N')||(g=='n'))
		 {
                   printf("Enter the Name to Delete:\n");
                   scanf(" %s",d);
                   while(temp!=0)
                   {
                    if(strcmp(temp->name,d)==0)
                    { 
			printf("  %d  %s  %f \n",temp->roll,temp->name,temp->marks);
                        temp=temp->next;
                    }
                    else
                    {
                        prev = temp;
                        temp = temp->next;
                    }
                  }
		   temp=t;
		   printf("Enter the Rollno to Delete:\n");
	           scanf("%d",&num);
		   while(temp!=0)
	           {
		    if(temp->roll == num)
		    {
			if(temp == *ptr)
				*ptr = temp->next;
			else
				prev->next = temp->next;

			free(temp);
			n=n-1;
			printf("        Deleted a Record\n\n");
			return;
		    }
		    else
		    {
			prev = temp;
			temp = temp->next;
		    }
	          }  
		   printf("        Deleted a Record\n\n");
                   return;
                }
	      else
	      {
		      printf("Invalid input\n");
		      return;
	      }

}

