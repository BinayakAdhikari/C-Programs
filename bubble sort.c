#include<stdio.h>
void bubble_sort(int a[],int n);
int main()
{
int a[100],n,i;
printf("enter value of n:");
scanf("%d",&n);
printf("\nenter %d element",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\narray before sorting\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
bubble_sort(a,n);
printf("\narray after sorting\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return ;
}
void bubble_sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<(n-1);i++)
{
for(j=0;j<(n-i-1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
