#include<stdio.h>
int main()
{
int a[10][10],t[10][10],m,n,i,j;
printf("enter order of matrix:");
scanf("%d%d",&m,&n);
printf("\nenter element of matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\ninput matrix is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
t[j][i]=a[i][j];
}
}
printf("\ntranspose matrix is:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",t[i][j]);
}
printf("\n");
}
return ;
}
