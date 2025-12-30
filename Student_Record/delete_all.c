#include"header.c"

void delete_all(ST**ptr)
{
	if(*ptr==0)
        {
                printf(" No Data Found/Available to Modify..........\n");
                return;
        }
	ST*temp ;
	while(*ptr!=0)
	{
		temp = *ptr;
		*ptr = temp->next;
		free(temp);
	}
	printf("        Deleted All Record\n\n");
}
