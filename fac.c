#include<stdio.h>
void main()
{
int n,s,fact=1;
printf("\n enter the number");
scanf("%d",&n);
for(s=1;s<=n;s++)
{
fact=fact*s;
}
printf("\n factorial num is %d",fact");
}
