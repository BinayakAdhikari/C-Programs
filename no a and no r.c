#include<stdio.h>
void sum();
int main()
{
sum();
return;
}
void sum()
{
int a,b,s;
printf("enter a and b:");
scanf("%d%d",&a,&b);
s=a+b;
printf("\nsum=%d",s);
}
