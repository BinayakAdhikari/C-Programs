#include<stdio.h>
int main()
{
int a[10],i,n,s=0;
printf("enter the number:");
scanf("%d",&n);
printf("enter array of element:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
}
{
printf("\nthe sum is %d",s);
}
return 0;
}
