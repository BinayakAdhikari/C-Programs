#include<stdio.h>
int main()
{
char source[50],destination[50];
int i=0;
printf("enter a string:\t");
gets(source);
while(source[i]!='\0')
{
destination[i]=source[i];
i++;
}
destination[i]='\0';
printf("\nstring copied:\t");
puts(destination);
return ;
}
