#include<stdio.h>
int main()
{
struct student
{
int rollno;
char name[15];
char address[15];
float marks;
};
struct student st;
printf("enter the rollno:");
scanf("%d",&st.rollno);
printf("\nenter the name:");
scanf("%s",st.name);
printf("\nenter the address:");
scanf("%s",st.address);
printf("\nenter the marks:");
scanf("%f",&st.marks);
printf("\nrollno\tname\taddress\tmarks\n");
printf("\n.....................\n");
printf("%d\t%s\t%s\t%f",st.rollno,st.name,st.address,st.marks);
return ;
}
