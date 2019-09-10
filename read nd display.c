#include<stdio.h>
int main()
{
FILE *fp;
char s[15];
fp=fopen("c:\\barsha\\test.txt","r");
if(fp==NULL)
{
printf("file cannot be open");
}
else
{
printf("file is created");
}
fgets(s,15,fp);
printf("\nthe content from file is:");
puts(s);
return 0;
}
