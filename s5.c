#include<stdio.h>
int main()
{
unsigned int n,temp;
int sum=0,rem;
printf("enter value of n:");
scanf("%u",&n);
temp=n;
while(n>0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
if(sum==temp)
{
printf("\n%u is armstrong",temp);
}
else
{
printf("\n%u is not armstrong",temp);
}
}
return 0;
}
