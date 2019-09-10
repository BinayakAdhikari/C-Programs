#include<stdio.h>
int main()
{
int a,b,x,y,real,img;
printf("enter the first complex number");
scanf("%d%d",&a,&b);
printf("\nenter the second complex number");
scanf("%d%d",&x,&y);
real=a+x;
img=b+y;
printf("\nsum of complex number=%d+i%d",real,img);
return;
}
