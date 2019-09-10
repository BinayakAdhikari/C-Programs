#include<stdio.h>
void display(int a[],int n);
int main()
{
int a[100],n,i;
printf("how many elements?");
scanf("%d",&n);
printf("\nenter %d elememts:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
display(a,n);
return ;
}
void display(int a[],int n)
{
int i;
printf("\nthe array is\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
