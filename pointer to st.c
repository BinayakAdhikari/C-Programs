#include<stdio.h>
void display(int roll,char name[],char faculty[],float marks);
int main()
{
struct student
{
int roll;
char name[15];
char faculty[10];
float marks;
}st;
printf("enter rollno:");
scanf("%d",&st.roll);
printf("\nenter name:");
scanf("%s",st.name);
printf("\nenter faculty:");
scanf("%s",st.faculty);
printf("\nenter marks:");
scanf("%f",&st.marks);
display(st.roll,st.name,st.faculty,st.marks);
return 0;
}
void display(int roll,char name[],char faculty[],float marks)
{
printf("\nrollno\tname\tfaculty\tmarks");
printf("\n............................\n");
printf("%d\t%s\t%s\t%f",roll,name,faculty,marks);
}
