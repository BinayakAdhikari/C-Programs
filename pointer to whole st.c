#include<stdio.h>
#include<stdlib.h>
struct book
{
int ISBN;
char tittle[15];
float price;
}b;
void display(struct book b);
int main()
{
printf("enter ISBN:");
scanf("%d",&b.ISBN);
printf("\nenter the tittle:");
fflush(stdin);
gets(b.tittle);
printf("\nenter price:");
scanf("%f",&b.price);
display(b);
return 0;
}
void display(struct book b)
{
printf("\nISBN\ttittle\tprice");
printf("\n...........................\n");
printf("%d\t%s\t%f",b.ISBN,b.tittle,b.price);
}
