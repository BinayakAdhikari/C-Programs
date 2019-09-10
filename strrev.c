#include<stdio.h>
#include<string.h>
int main()
{
char string[100];
printf("enter input string:");
gets(string);
strrev(string);
printf("\nreverse string is:\t");
puts(string);
return 0;
}
