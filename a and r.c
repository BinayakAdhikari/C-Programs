#include<stdio.h>
int sum(int a,int b);
int main()
{
int x,y,result;
printf("enter value of x and y:");
scanf("%d%d",&x,&y);
result=sum(x,y);
printf("\nsum=%d",result);
return 0;
}
int sum(int a,int b)
{
int s;
s=a+b;
return s;
}
