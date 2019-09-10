#include<stdio.h>
int main()
{
int num, choice;
printf("1.check even\n2.check odd");
printf("\nenter a number to check:");
scanf("%d",&num);
printf("\nenter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(num%2==0)
printf("\n%d is even",num);
break;
case 2:
if(num%2!=0)
printf("\n%d is odd",num);
break;
default:
printf("\ninvalid choice");
}
return 0;
}
