#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
float r1,r2;
a=2;
b=7;
c=3;
d=b*b-4*a*c;
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("root1=%f\nroot2=%f",r1,r2);
return 0;
}
