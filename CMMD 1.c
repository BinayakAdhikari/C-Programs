#include<stdio.h>
int main()
{
int a,b,s,d,p,rem;
float div;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
s=a+b;
d=a-b;
p=a*b;
div=a/b;
rem=a%b;
printf("Addition Result=%d\nSubtration Result=%d\nMultiplication Result=%d\nDivision Result=%f\nRemainder=%d",s,d,p,div,rem);
return;
}
