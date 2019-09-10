#include<stdio.h>
int main()
{
int d,y,m,rd;
printf("enter no. of days:");
scanf("%d",&d);
y=d/365;
rd=d%365;
m=rd/30;
d=rd%30;
printf("\n%d year,%d month and %d days",y,m,d);
return;
}
