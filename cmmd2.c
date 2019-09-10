#include<stdio.h>
int main()
{
int p,t;
float r,i;
printf("Enter value of p:");
scanf("%d",&p);
printf("Enter value of t:");
scanf("%d",&t);
printf("Enter the value of r:");
scanf("%f",&r);
i=(p*t*r)/100;
printf("Interest=%f",i);
return;
}
