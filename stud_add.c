/*Add new record*/
#include<stdio.h>
#include<stdlib.h>
#include"student.h"
void stud_add(NODE **ptr){
NODE *new,*temp;
int r=1,found;
//find the smallest roll number not used
while(1){
found=0;
temp=*ptr;
while(temp!=NULL){
if(temp->roll==r)
found=1;
temp=temp->next;
}
if(found==0)
break;
r++;
}
//create the new node
new=(NODE *)malloc(sizeof(NODE));
//store info
new->roll=r;
printf("Roll Number : %d\n",r);
printf("Enter Name : ");
scanf("%s",new->name);
printf("Enter Percentage : ");
scanf("%f",&new->per);
new->next=NULL;
//link the node at the end of the list
if(*ptr==NULL)
*ptr=new;
else{
temp=*ptr;
while(temp->next!=NULL)
temp=temp->next;
temp->next=new;
}
printf("Record added.\n");
}
