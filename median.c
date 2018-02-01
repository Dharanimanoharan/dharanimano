#include<stdio.h>
void main()
{
 int a[100],i,j,n,temp;
 printf("\n enter the number");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
  for(j=i;j<n;j++)
  {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
   }
   }
   for(i=0;i<n;i++)
   {
   printf("\n The median element is %d",a[i]);
   }
}
