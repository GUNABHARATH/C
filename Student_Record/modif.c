#include"header.c"

ST* modify(ST**ptr)
{
	if(*ptr==0)
	{
		printf(" No Data Found/Available to Modify..........\n");
		
	}
	else
	{
	ST*temp = (ST*)malloc(sizeof(ST));
	temp = *ptr;
	char m;
	int n;
	char s[20],s1[20];
	float f;
	printf(" ___________________________________________________\n");
	printf("|   Enter which Record to Search for Modification   |\n");
	printf("|___________________________________________________|\n");
	printf("|     R/r : To Search Rollno                        |\n");
	printf("|     N/n : To Search Name                          |\n");
	printf("|___________________________________________________|\n");
	printf("\n Enter your Choice to Search:");
	scanf(" %c",&m);
	if((m=='R')||(m=='r'))
	{
		printf("  Enter the Rollno to Search:");
		scanf("%d",&n);
		while((*ptr!=0)&&((*ptr)->roll!=n))
		{
			(*ptr)=(*ptr)->next;
		}
		printf(" _____________________________________________\n");
		printf("|   Enter which Record to Modify              |\n");
		printf("|_____________________________________________|\n");
		printf("|    N/n : Name                               |\n");
		printf("|    P/p : Percentage                         |\n");
		printf("|_____________________________________________|\n");
		printf("     Enter your Choice:");
		scanf(" %c",&m);
		if((m=='N')||(m=='n'))
		{                
			printf("\n     Enter the Name to be Modified:");
			scanf(" %s",s1);
                        strcpy(((*ptr)->name),(s1));
			return temp;
		}
		if((m=='P')||(m=='p'))
		{
                        printf("\n     Enter the Percentage to Modified:");
                        scanf("%f",&f);
    			(*ptr)->marks = f;
			return temp;
		}
	}
	if((m=='N')||(m=='n'))
	{
		printf("  Enter the Name to Search:");
		scanf(" %s",s);
		while(*ptr!=0)
		{
			if(strcmp(s,(*ptr)->name)==0)
			{
			printf("\n %d %s %f\n\n",(*ptr)->roll,(*ptr)->name,(*ptr)->marks);
			}
			(*ptr)=(*ptr)->next;
		}
		(*ptr)=temp;
                printf("  Enter the Rollno to Modify:");
                scanf("%d",&n);
                while((*ptr!=0)&&((*ptr)->roll!=n))
                {
                        (*ptr)=(*ptr)->next;
                }
                 
		printf(" _____________________________________________\n");
		printf("|   Enter which Record to Modify              |\n");
		printf("|_____________________________________________|\n");
		printf("|    N/n : Name                               |\n");
		printf("|    P/p : Percentage                         |\n");
		printf("|_____________________________________________|\n");
		printf("     Enter your Choice to Modify:");
		scanf(" %c",&m);
		if((m=='N')||(m=='n'))
		{
                        printf("\n     Enter the Name to be Modified:");
                        scanf(" %s",s1);
			strcpy(((*ptr)->name), (s1));
                        printf("        Modified the  Record\n\n");
			return temp;
		}
		if((m=='P')||(m=='p'))
		{
			printf("\n     Enter the Percentage to be Modified:");
			scanf("%f",&f);
			(*ptr)->marks = f;
                        printf("        Modified the  Record\n\n");			
			return temp;
		}
		else
		{
			printf("      Invalid Input                \n");
		}
	}
	return temp;
	}
}
