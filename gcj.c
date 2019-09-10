#include<stdio.h>
int main()
{
int a=10,*x;
x=&a;
printf("the address of a=%u",&a);
printf("\nthe address of a=%u",x);
printf("\nvalue of a=%d",a);
printf("\nvalue of a using dereferance operater=%d",*x);
return ;
}
