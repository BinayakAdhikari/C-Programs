#include<stdio.h>
int sum();
int main()
{
int result;
result=sum();
printf("\nsum=%d",result);
return;
}
int sum()
{
int x,y,s;
printf("enter value of x and y:");
scanf("%d%d",&x,&y);
s=x+y;
return s;
}
