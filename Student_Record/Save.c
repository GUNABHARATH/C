#include"header.c"

void save(ST*ptr)
{
	FILE * fp =fopen("Student.txt","w");
	fprintf(fp," _________________________________________ \n");
        fprintf(fp,"|       STUDENTS  DATABASE                |\n");
        fprintf(fp,"|_________________________________________|\n");
        fprintf(fp,"|RollNo    Name            Marks          |\n");
        fprintf(fp,"|_________________________________________|\n");
        while(ptr!=0)
	{
		fprintf(fp," %4d        %-11s        %8.2f   \n",ptr->roll,ptr->name,ptr->marks);
		ptr = ptr->next;
	}
	fclose(fp);
        printf("        Saved the  Record\n\n");
	return;
}
