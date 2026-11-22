typedef struct st{
//data
int roll;
char name[25];
float per;
//link
struct st *next;
} NODE;
void stud_add(NODE **ptr);
void stud_del(NODE **ptr);
void stud_show(NODE *hptr);
void stud_mod(NODE *hptr);
void stud_save(NODE *hptr);
void stud_load(NODE **ptr);
void stud_sort(NODE *hptr);
