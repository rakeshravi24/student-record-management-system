/*Show the list*/
#include<stdio.h>
#include"student.h"
void stud_show(NODE *hptr){
if(hptr==NULL){
printf("No records found.\n");
return;
}
printf("--------------------------------------\n");
printf("Roll No    Name   Percentage\n");
printf("--------------------------------------\n");
while(hptr!=NULL){
printf("%-12d",hptr->roll);
printf("%-13s",hptr->name);
printf("%.2f\n",hptr->per);
hptr=hptr->next;
}
printf("--------------------------------------\n");
}
