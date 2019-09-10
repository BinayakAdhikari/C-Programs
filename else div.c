#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%3==0&&n%6!=0)
{
printf("%d is exactly divisible by 3 but not by 6",n);
}
else
{
printf("%d is not a required number",n);
}
return ;
}
