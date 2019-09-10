#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("c:\\barsha\\test.txt","w");
if(fp==NULL)
{
printf("file annot be open");
}
else
{
printf("file is created");
}
fputs("I study BCA",fp);
fclose(fp);
return 0;
}
