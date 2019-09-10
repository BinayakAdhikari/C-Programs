#include<stdio.h>
#include<string.h>
int main()
{
char name[25][10],temp[10];
int i,j;
printf("enter name of 5 students:\t");
for(i=0;i<5;i++)
{
gets(name[i]);
}
for(i=0;i<5;i++)
{
for(j=0;j<(5-i-1);j++)
{
if(strcmp(name[j],name[j+1])>0)
{
strcpy(temp,name[j]);
strcpy(name[j],name[j+1]);
strcpy(name[j+1],temp);
}
}
}
printf("\nsorted order:\t");
for(i=0;i<5;i++)
printf("%s\n",name[i]);
return 0;
}
