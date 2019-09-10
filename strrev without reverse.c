#include<stdio.h>
int main()
{
char string[50],reverse[50];
int i=0,l=0,j=0;
printf("enter input string:\t");
gets(string);
while(string[i]!='\0')
{
l++;
i++;
}
for(i=l-1;i>=0;i--,j++)
{
reverse[j]=string[i];
}
reverse[j]='\0';
printf("\nreverse string:\t");
puts(reverse);
return ;
}
