#include<stdio.h>
#include<string.h>
int main()
{
char s1[20],s2[20];
int d;
printf("enter first string:\t");
gets(s1);
printf("enter ssecond string:\t");
gets(s2);
d=strcmp(s1,s2);
if(d<0)
{
printf("string %s is smaller than string %s",s1,s2);
}
else if(d>0)
{
printf("\nstring %s is smaller than string %s",s2,s1);
}
else
{
printf("\nboth string are same");
}
return 0;
}
