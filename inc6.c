int main()
{
int i,n;
printf("enter number n:");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
{
break;
}
}
if(i==n)
{
printf("\n%d is prime",n);
}
else
{
printf("\n%d is not prime",n);
}
return 0;
}
