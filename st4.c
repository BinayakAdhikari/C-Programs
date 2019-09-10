#include<stdio.h>
int main()
{
struct book
{
char name[15];
int pg;
int price;
};
struct book b[5];
int i,sum=0,average;
for(i=0;i<5;i++)
{
printf("\nenter the record of book %d",i+1);
printf("\nname:");
scanf("%s",b[i].name);
printf("\npg:");
scanf("%d",&b[i].pg);
printf("\nprice:");
scanf("%d",&b[i].price);
}
for(i=0;i<5;i++)
{
 sum=sum+b[i].price;
}
average=(sum/5);
printf("Average sum=%d",average);
return 0;
}

