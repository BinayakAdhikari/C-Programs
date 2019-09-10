#include<stdio.h>
int main()
{
int a,b;
char choice;
printf("enter number a and b:");
scanf("%d %d",&a,&b);
printf("\nenter your choice(+,-):");
scanf("%c",&choice);
switch(choice)
{
case'+':
printf("\nsum=%d",(a+b));
break;
case'-':
printf("\ndifference",(a-b));
break;
default:
printf("\ninvalid choice");
}
return 0;
}


