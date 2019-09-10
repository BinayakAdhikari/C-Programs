#include<stdio.h>
int main()
{
 char string[50];
 int i=0,spcount=0;
 printf("enter inter string:\t");
 gets(string);
 while(string[i]!='\0')
 {
 if(string[i]==' ')
 {
 spcount ++;
 }
 i++;
 }
 printf("\nno.of words=%d",spcount+1);
 return ;
 }
