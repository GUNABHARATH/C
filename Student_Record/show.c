#include"header.c"
void show(ST *ptr)
{
	if(ptr==0)
	{
		printf("          No Data Found............\n");
		return;
	}
	printf(" _________________________________________ \n");
	printf("|       STUDENTS  DATABASE                |\n");
        printf("|_________________________________________|\n");	
        printf("|RollNo    Name            Marks          |\n");
        printf("|_________________________________________|\n");
	while(ptr!=0)
	{
	printf("|%4d    |   %-11s|       %8.2f  |\n",ptr->roll,ptr->name,ptr->marks);
	ptr = ptr->next;
	}
	printf("|_________________________________________|\n");
        printf("\n           The List is Shown\n\n");
}
