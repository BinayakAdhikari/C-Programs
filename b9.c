#include<stdio.h>
int main()
{
int n,r1,r2,r3,r4,sum;
printf("enter the number:");
scanf("%d",&n);
r1=n%10;
n=n/10;
r2=n%10;
n=n/10;
r3=n%10;
n=n/10;
r4=n%10;
sum=r1+r2+r3+r4;
printf("\nrequired sum=%d",sum);
return 0;
}
