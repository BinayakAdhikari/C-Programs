#include<stdio.h>
int main()
{
int a[50],n,i,j,temp;
printf("hoe many elements:");
scanf("%d",&n);
printf("\nenter the elementdss of array");
for(i=0;i<n;i++)
scanf("%d",a+i);
for(i=0;i<n;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(*(a+j)>*(a+j+1))
{
temp=*(a+j);
*(a+j)=*(a+j+1);
*(a+j+1)=temp;
}
}
}
printf("\nsecond largest element=%d",*(a+n-2));
return 0;
}
