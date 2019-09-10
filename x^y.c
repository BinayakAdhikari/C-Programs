#include<stdio.h>
int main()
{
int i,x,y,product=1;
printf("enter the number of x and y:");
scanf("%d%d",&x,&y);
for(i=1;i<=y;i++)
{
product=product*x;
}
printf("\nvalue of %d raised to %d is %d",x,y,product);
return 0;
}
