#include<stdio.h>
void main()
{
 int l,m,n=0,rem;
 printf("enter the number");
 scanf("%d",&l);
 l=m;
 while(m!=0)
 {
  rem=m%10;
  n=n+rem*rem*rem;
  m=m/10;
  }
  if(n==l)
  {
  printf("armstrong number");
  }
  else
  {
  printf("not armstrong number");
  }
  }
