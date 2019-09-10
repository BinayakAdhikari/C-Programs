#include<stdio.h>
#include<stdlib.h>
struct member
{
int rollno;
char name[20];
int marks;
};
struct member m;
int main()
{
int i;
{
printf("enter record of students",m);
printf("\nrollno:");
scanf("%d",&m.rollno);
printf("\nname:");
fflush(stdin);
gets(m.name);
printf("\nmarks:");
scanf("%d",&m.marks);
printf("\nrollno\tname\t\tmarks");
printf("\n..........................");
}

if(m.marks>250)
{
printf("\n%d\t%s\t%d",m.rollno,m.name,m.marks);
}
return 0;
}
