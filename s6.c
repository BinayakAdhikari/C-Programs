#include<stdio.h>
int main()
{
int i,j;
printf("multiplication table from 1 to 10:\n");
for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{
printf("%d*%d=%d\t",i,j,i*j);
}
printf("\n");
}
return 0;
}
