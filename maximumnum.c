#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a[20],i,max=0;
 clrscr();
 printf("\n enter the number");
 scanf("%d",&n);
 printf("\n Enter the number of values");
 max=a[0];
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 {
  if(a[i]>max)
  {
  max=a[i];
  }
  }
  printf("\n the maximum number is %d",max);
  getch();
  }
