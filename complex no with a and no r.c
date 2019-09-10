#include<stdio.h>
void sum(int,int,int,int);
int main()
{
int a,b,x,y;
printf("enter first comperx no:");
scanf("%d%d",&a,&b);
printf("enter second complex no:");
scanf("%d%d",&x,&y);
sum(a,b,x,y);
return 0;
}
void sum(int a,int b,int x,int y)
{
int real,img;
real=a+x;
img=b+y;
printf("\nsum=%d+i%d",real,img);
}
