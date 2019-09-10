#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("c:\\barsha\\test.txt","a");
if(fp==NULL)
{
printf("file annot be open");
}
else
{
printf("file is created");
}
fputs("at Patan Multiple Campus",fp);
fclose(fp);
return 0;
}
