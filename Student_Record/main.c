#include"header.c"

int main()
{
	n=0;
	highroll = 0;
	avno=0;
	ST *hptr=0;
	char ch;
	FILE*fp=fopen("Student.txt","r");
		int i,x=0;
		char z[20];
		float l;
		char q;

		while(x!=5)
		{
			q=fgetc(fp);
			if(q=='\n')
				x++;
		}

	while((fscanf(fp,"%d %s %f",&i,z,&l)!=EOF))
	{
		ST*temp = (ST*)malloc(sizeof(ST));
		temp->roll = i;
		temp->marks = l;
		strcpy(temp->name,z);
		n++;
        if((hptr==0)||(temp->roll<(hptr->roll)))
	{
		temp->next = hptr;
		hptr=temp;
	}
	else
	{
		ST *last = hptr;
		while((last->next!=0)&&(temp->roll>(last->next->roll)))
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}

	}
	highroll=n;
         avno=n;
	while(1)
	{
		printf(" _________________________________________ \n");
		printf("|      ****  STUDENT  RECORD  MENU  ****  |\n");
		printf("|_________________________________________|\n");
		printf("|       A/a : Add New Record              |\n");
		printf("|       D/d : Delete A Record             |\n");
		printf("|       S/s : Show the List               |\n");
		printf("|	M/m : Modify A Record             |\n");
		printf("|       V/v : Save                        |\n");
		printf("|       E/e : Exit                        |\n");
		printf("|       T/t : Sort the List               |\n");
		printf("|       L/l : Delete All the Records      |\n");
		printf("|       R/r : Reverse the List            |\n");
                printf("|_________________________________________|\n\n");
		printf("        Enter Your Choice:");
		scanf(" %c",&ch);
		printf("\n\n");

		switch(ch)
		{
			case 'A':
			case 'a':
				if(n<avno)
                                  {
                                          avno=no(hptr);
                                  }
                                  else{
                                         if(n==highroll)
                                                 avno = n+1;
                                      }
				add(&hptr);
				  printf("        Added a new Record\n\n");
				  break;
			case 'D':
			case 'd':
                                  delete(&hptr);
				  break;
			case 'S':
			case 's':
                                  show(hptr);
				  break;
			case 'M':
			case 'm':
                                 hptr= modify(&hptr);
				  break;
			case 'V':
			case 'v':
                                  save(hptr);
				  break;
			case 'E':
			case 'e':
                                  printf(" ________________________________________ \n");
				  printf("|   Enter                                |\n");
				  printf("|    S/s :  Save &Exit                   |\n");
				  printf("|    E/e :  Exit without Saving          |\n");
				  printf("|________________________________________|\n");
				  printf("\n  Enter your Choice:");
			          scanf(" %c",&ch);
			          if((ch=='S')||(ch=='s'))
				  {
					  save(hptr);
					  return 0;
				  }
			          if((ch=='E')||(ch=='e'))
				  {	  
				  printf("        Exiting........................\n\n");
				  return 0;
				  }
				  else
				  {
					  printf("      Invalid Input         \n");
				  }
				  break;
			case 'T':
			case 't':
                                  sort(hptr);
				  break;
			case 'L':
			case 'l':
                                  delete_all(&hptr);
				  break;
			case 'R':
			case 'r':
				  printf(" _________________________________________ \n");
                                  printf("|       STUDENTS  DATABASE                |\n");
                                  printf("|_________________________________________|\n");
                                  printf("|RollNo    Name            Marks          |\n");
                                  printf("|_________________________________________|\n");
                                  rev_print(hptr);
				  printf("|_________________________________________|\n");
                                  printf("        Reverse Printed the Record\n\n");
	                          break;
                        default :
                                  printf("        Invalid Input                  \n");  
				  break;


		}
		if(highroll<n)
			highroll=n;
	}

}


