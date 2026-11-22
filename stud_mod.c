/*Modify a record*/
#include<stdio.h>
#include<string.h>
#include"student.h"
void stud_mod(NODE *hptr){
NODE *temp;
char op,name[25];
float p;
int r,count;
printf("R/r : Roll Number\n");
printf("N/n : Name\n");
printf("P/p : Percentage\n");
printf("Enter Your Choice: ");
scanf(" %c",&op);

//get the roll number to modify
if(op=='R' || op=='r')
{
	printf("Enter Roll Number: ");
	scanf("%d",&r);
}
else if(op=='N' || op=='n')
{
  	printf("Enter Name: ");
   	scanf("%s",name);
   	count=0;
   	temp=hptr;
   	while(temp!=NULL)
   {
       	if(strcmp(temp->name,name)==0)
       	{
           	printf("%d %s ",temp->roll,temp->name);
           	printf("%.2f\n",temp->per);
           	count++;
       	}
       	temp=temp->next;
   }
   if(count==0)
   {
      	printf("No matching record.\n");
      	return;
   }
   printf("Enter Roll Number to modify: ");
   scanf("%d",&r);
}
else if(op=='P' || op=='p')
{
   	printf("Enter Percentage: ");
    	scanf("%f",&p);
    	count=0;
    	temp=hptr;
    	while(temp!=NULL)
    	{
        	if(temp->per==p)
		{
			printf("%d %s ",temp->roll,temp->name);
			printf("%.2f\n",temp->per);
  			count++;
		}
		temp=temp->next;
     	}
	if(count==0)
	{
		printf("No matching record.\n");
		return;
	}
	printf("Enter Roll Number to modify: ");
	scanf("%d",&r);
}
else
{
	printf("Invalid choice\n");
	return;
}
//search the node with roll number r
temp=hptr;
while(temp!=NULL && temp->roll!=r)
temp=temp->next;
if(temp==NULL)
{
	printf("Roll number not found.\n");
	return;
}
//change the name or percentage
printf("N/n : Name\n");
printf("P/p : Percentage\n");
printf("Enter Your Choice: ");
scanf(" %c",&op);
if(op=='N' || op=='n')
{
	printf("Enter New Name: ");
	scanf("%s",temp->name);
	printf("Record modified.\n");
}
else if(op=='P' || op=='p')
{
	printf("Enter New Percentage: ");
	scanf("%f",&temp->per);
	printf("Record modified.\n");
}
else
printf("Invalid choice\n");
}
