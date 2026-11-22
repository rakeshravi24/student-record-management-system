/*Sort the list*/
#include<stdio.h>
#include<string.h>
#include"student.h"
void stud_sort(NODE *hptr){
NODE *i,*j;
char op,t_name[25];
int t_roll,swap;
float t_per;
printf("N/n : Sort by Name\n");
printf("P/p : Sort by Percentage\n");
printf("Enter Your Choice: ");
scanf(" %c",&op);
if(op!='N' && op!='n' && op!='P' && op!='p')
{
	printf("Invalid choice\n");
	return;
}
for(i=hptr;i!=NULL;i=i->next)
{
	for(j=i->next;j!=NULL;j=j->next)
	{
		swap=0;
		if((op=='N' || op=='n') && strcmp(i->name,j->name)>0)
		swap=1;
		if((op=='P' || op=='p') && i->per<j->per)
		swap=1;
		//exchange the data of i and j
		if(swap==1)
		{
			t_roll=i->roll;
			i->roll=j->roll;
			j->roll=t_roll;
			strcpy(t_name,i->name);
			strcpy(i->name,j->name);
			strcpy(j->name,t_name);
			t_per=i->per;
			i->per=j->per;
			j->per=t_per;
		}
	}
}
printf("List sorted.\n");
}
