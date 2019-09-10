#include<stdlib.h>
#include<stdio.h>
int main()
{
int *a,n,i,sum=0;
printf("enter value of n:");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
printf("\nenter elements of list:");
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
for(i=0;i<n;i++)
{
sum=sum+*(a+i);
}
printf("\nrequired sum=%d",sum);
free(a);
return 0;
}
