#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	char name[20];
	float marks;
	struct student *next;
}ST;

int n,avno,highroll;

void add(ST**);
void delete(ST**);
void show(ST*);
ST* modify(ST**);
void save(ST*);
void sort(ST*);
void delete_all(ST**);
void rev_print(ST*);
int no(ST*);
