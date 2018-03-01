#include<stdio.h>
int main()
{
int a[20],n,k,i;
printf("\n Enter the value of n and k");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("%d",a[k-1]);
return 0;
}
