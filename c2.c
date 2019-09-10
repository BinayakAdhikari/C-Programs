#include<stdio.h>
int main()
{
int x,y,z;
printf("enter three number:");
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{
if(x>z)
{
printf("\n%d is largest",x);
}
else
{
printf("\n%d is largest",z);
}
}
else
{
if(y>z)
{
printf("\n%d is largest",y);
}
else
{
printf("\n%d is largest",z);
}
}
return 0;
}
