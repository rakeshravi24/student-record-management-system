/*Delete a record*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"student.h"
void stud_del(NODE **ptr){
NODE *temp,*prev;
char op,name[25];
int r,count;
printf("R/r : Delete using Roll Number\n");
printf("N/n : Delete using Name\n");
printf("Enter Your Choice: ");
scanf(" %c",&op);
//get the roll number to delete
if(op=='R' || op=='r'){
printf("Enter Roll Number: ");
scanf("%d",&r);
}
else if(op=='N' || op=='n'){
printf("Enter Name: ");
scanf("%s",name);
//show all records with this name
count=0;
temp=*ptr;
while(temp!=NULL){
if(strcmp(temp->name,name)==0){
printf("%d %s ",temp->roll,temp->name);
printf("%.2f\n",temp->per);
count++;
}
temp=temp->next;
}
if(count==0){
printf("No matching record.\n");
return;
}
printf("Enter Roll Number to delete: ");
scanf("%d",&r);
}
else{
printf("Invalid choice\n");
return;
}
//search the node with roll number r
temp=*ptr;
prev=NULL;
while(temp!=NULL && temp->roll!=r){
prev=temp;
temp=temp->next;
}
if(temp==NULL){
printf("Roll number not found.\n");
return;
}
//remove the node from the list
if(prev==NULL)
*ptr=temp->next;
else
prev->next=temp->next;
free(temp);
printf("Record deleted.\n");
}
