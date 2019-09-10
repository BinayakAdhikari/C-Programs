#include<stdio.h>
int main()
{
char string [50];
int i=0,spcount=0,commacount=0,semicolcount=0,vcount=0,conscount=0;
printf("enter the sentence:");
gets(string);
while(string[i]!='\0')
{
if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
{
vcount ++;
i++;
}
else if(string[i]==';')
{
semicolcount ++;
i++;
}
else if(string[i]==',')
{
commacount ++;
i++;
}
else if(string[i]==' ')
{
spcount ++;
i++;
}
else
{
conscount ++;
i++;
}
}
printf("\nno. of vowels=%d\nno. of semicolon=%d\nno. of comma=%d\nno. of space=%d\nno. of consonant=%d",vcount,semicolcount,commacount,spcount,conscount);
return 0;
}
