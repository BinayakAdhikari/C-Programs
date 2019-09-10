#include<stdio.h>
int main()
{
float m,s,e,a,ss,t,per,div;
printf("enter marks of math:");
scanf("%f",&m);
printf("\nenter marks of science:");
scanf("%f",&s);
printf("\nenter marks of english:");
scanf("%f",&e);
printf("\nenter marks of account:");
scanf("%f",&a);
printf("\nenter marks of social studies:");
scanf("%f",&ss);
t=m+s+e+a+ss;
per=(t/500)*100;
printf("\ntotal=%f\npercentage=%f",t,per);
if(per>=80)
{
printf("\ndistinction");
}
else if(per>=60&&per<80)
{
printf("\nfirst division");
}
else if(per>=45&&per<60)
{
printf("\nsecond division");
}
else if(per>=32&&per<45)
{
printf("\nthird division");
}
else
{
printf("\nfail");
}
return ;
}



