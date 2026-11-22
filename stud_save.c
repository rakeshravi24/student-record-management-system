/*Save and load*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"student.h"
void stud_save(NODE *hptr){
FILE *fp;
fp=fopen("student.dat","w");
if(fp==NULL)
{
	printf("Cannot open file.\n");
	return;	
}
//write every node as one line
while(hptr!=NULL)
{
	fprintf(fp,"%d %s %f\n",hptr->roll,hptr->name,hptr->per);
	hptr=hptr->next;
}
fclose(fp);
printf("Records saved in student.dat\n");
}
void stud_load(NODE **ptr){
FILE *fp;
NODE *new,*last=NULL;
int r;
char n[25];
float p;
fp=fopen("student.dat","r");
if(fp==NULL)
return;
//read one line at a time
while(fscanf(fp,"%d%s%f",&r,n,&p)==3)
{
	//create the new node
	new=(NODE *)malloc(sizeof(NODE));
	//store info
	new->roll=r;
	strcpy(new->name,n);
	new->per=p;
	new->next=NULL;
	//link the node at the end
	if(*ptr==NULL)
	{
		*ptr=new;
	}
	else
	{
		last->next=new;
		last=new;
	}
	last=new;	
}
fclose(fp);
}
