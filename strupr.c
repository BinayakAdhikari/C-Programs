#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
printf("enter string:\t");
gets(s);
strlwr(s);
printf("\nstring in uppercase:\t");
puts(s);
return ;
}
