#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\nsum of sequence=%d",sum);
return 0;
}
