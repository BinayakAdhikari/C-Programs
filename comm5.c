//to check entered no. is excatly divisble by 5 or not
#include<stdio.h>
int main()
{
int num,rem;
printf("Enter any number:");
scanf("%d",&num);
rem=num%5;
if(rem==0)
printf("divisble by 5");
else
printf("notdivisble by 5");
return;
}
