#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,A;
printf("enter the value of a b c and s");
scanf("%f%f%f",&a,&b,&c,&s);
s=(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of three sides of triangle=%f",A);
return 0;
}
