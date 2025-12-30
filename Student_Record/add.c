#include"header.c"

void add(ST**ptr)
{
	ST *temp = (ST*)malloc(sizeof(ST));
	printf("Enter the Name and Marks:\n");
	scanf(" %s %f",temp->name,&temp->marks);
        temp->roll = avno;
         if((*ptr==0)||(temp->roll<((*ptr)->roll)))
	 {
		 temp->next =*ptr;
		 *ptr = temp;
	 }	 
	 else
	 { 
                    ST * last = *ptr;
		    while((last->next!=0)&&(temp->roll>last->next->roll))
		     last = last->next;

		    temp->next = last->next;
		    last->next = temp;
	 }
	 n=n+1; 
}
