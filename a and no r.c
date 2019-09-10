#include<stdio.h>
void sum(int a,int b);
int main()
{
int x,y;
printf("enter value x and y:");
scanf("%d%d",&x,&y);
sum(x,y);
return 0;
}
void sum(int a,int b)
{
int s;
s=a+b;
printf("\nsum=%d",s);
}
