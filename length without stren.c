#include<stdio.h>
int main()
{
char str[10];
int l=0,i=0;
printf("enter input string:");
gets(str);
while(str[i]!='\0')
{
l++;
i++;
}
printf("\nlength of string is %d",l);
return ;
}
