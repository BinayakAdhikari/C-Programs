#include<stdio.h>
int main()
{
int a,b,c;
printf("enter value of a and b");
scanf("%d%d",&a,&b);
printf("\nbefore swap:a=%d and b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nafter swap:a=%d and b=%d",a,b);
return 0;
}
