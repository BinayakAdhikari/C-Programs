#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
{
struct employee
{
int ID;
char name[20];
char post[15];
float salary;
};
struct employee e[5];
for(i=0;i<5;i++)
{
printf("\nenter the record of employee %d",i+1);
printf("\nID:");
scanf("%d",&e[i].ID);
printf("\nname:");
fflush(stdin);
gets(e[i].name);
printf("\npost:");
fflush(stdin);
gets(e[i].post);
printf("\nsalary:");
scanf("%f",&e[i].salary);
}
printf("\n  ID\tname\t\tpost\tsalary:");
printf("\n................\n");
for(i=0;i<5;i++)
{
printf("\n%d\t%s\t\t%s\t%f",e[i].ID,e[i].name,e[i].post,e[i].salary);
}
return ;
}
}

