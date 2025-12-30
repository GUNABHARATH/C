#include"header.c"
void rev_print(ST*ptr)
{
	if(ptr==0)
        {
                printf(" No Data Found/Available to Modify..........\n");
                return;
        }
	if(ptr!=0)
	{
	rev_print(ptr->next);
        printf("|%4d    |   %-11s|       %8.2f  |\n",ptr->roll,ptr->name,ptr->marks);
	}
}
