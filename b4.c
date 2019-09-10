#include<stdio.h>
#define PI 3.14
int main()
{
int r,h;
float CSA,TSA,VOL;
printf("enter the value of r and h:");
scanf("%d%d",&r,&h);
CSA=(2*PI*r*h);
TSA=(2*PI*r*(r+h));
VOL=(PI*r*r*h);
printf("curve surface area=%f",CSA);
printf("total surface area=%f",TSA);
printf("volume=%f",VOL);
return;
}
