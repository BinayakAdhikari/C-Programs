//program to check even or odd
#include<stdio.h>
int main()
{
int num,rem;
printf("Enter any number:");
scanf("%d",&num);
rem=num%2;
if(rem==0)
printf("EVEN");
else
printf("ODD");
return;
}
