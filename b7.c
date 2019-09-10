#include<stdio.h>
int main()
{
int x,y,z,s;
printf("enter three numbers:");
scanf("%d%d%d",&x,&y,&z);
s=x<y?x:y;
s=s<z?s:z;
printf("smaller among three numbers %d %d and %d is %d",x,y,z,s);
return;
}
