#include<stdio.h>
void display(int m[][4]);
void transpose(int m[][4],int t[][4]);
int i,j;
int main()
{
int m[4][4],t[4][4],i,j;
printf("enter elements of matrix\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&m[i][j]);
}
}
printf("input matrix is\n");
display(m);
transpose(m,t);
printf("\ntranspose matrix is\n");
display(t);
return ;
}
void display(int m[][4])
{
int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",m[i][j]);
}
printf("\n");
}
}
void transpose(int m[][4],int t[][4])
{
int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
t[j][i]=m[i][j];
}
}
}
