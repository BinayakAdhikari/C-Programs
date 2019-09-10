#include<stdio.h>
#include<string.h>
int main()
{
char source[50],destination[50];
printf("enter a string:\t");
gets(source);
strcpy(destination,source);
printf("\ncopied string is:\t");
puts(destination);
return ;
}
