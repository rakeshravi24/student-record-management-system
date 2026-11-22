/*Main Menu and exit*/
#include<stdio.h>
#include<stdlib.h>
#include"student.h"
void exit_menu(NODE *hptr){
char op;
printf("S/s : Save and Exit\n");
printf("E/e : Exit Without Saving\n");
printf("Enter Your Choice: ");
scanf(" %c",&op);
if(op=='S' || op=='s')
{
	stud_save(hptr);
	exit(0);
}
else if(op=='E' || op=='e')
exit(0);
else
printf("Invalid choice\n");
}
int main()
{
	NODE *hptr=NULL;
	char op;
	//load old records from the file
	stud_load(&hptr);
	while(1)
	{
		printf("\n**** STUDENT RECORD MENU ****\n\n");
		printf("A/a : Add New Record\n");
		printf("D/d : Delete a Record\n");
		printf("S/s : Show the List\n");
		printf("M/m : Modify a Record\n");
		printf("V/v : Save\n");
		printf("T/t : Sort the List\n");
		printf("E/e : Exit\n\n");
		printf("Enter Your Choice: ");
		scanf(" %c",&op);
		switch(op)
		{
			case 'A': case 'a': stud_add(&hptr); break;
			case 'D': case 'd': stud_del(&hptr); break;
			case 'S': case 's': stud_show(hptr); break;
			case 'M': case 'm': stud_mod(hptr); break;
			case 'V': case 'v': stud_save(hptr); break;
			case 'T': case 't': stud_sort(hptr); break;
			case 'E': case 'e': exit_menu(hptr); break;
			default: printf("Invalid choice\n");
		}
	}
return 0;
}
