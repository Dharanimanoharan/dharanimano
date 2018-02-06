#include<stdio.h>
void main()
{
int n,r,fact=1;
printf("\n enter the number");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
fact=fact*r;
}
printf("\n factorial num is %d",fact);
}
