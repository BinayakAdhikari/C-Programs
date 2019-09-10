#include<stdio.h>
int main()
{
int *p,*q,a=10;
p=&a;
q=&p;
printf("address of p and q is % and %d",p,q);
return ;
}
