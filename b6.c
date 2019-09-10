#include<stdio.h>
int main()
{
int x,y,L;
printf("enter the numbers:");
scanf("%d%d",&x,&y);
L=x>y?x:y;
printf("\ngreater among %d and %d=%d",x,y,L);
return;
}
