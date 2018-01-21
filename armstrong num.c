#include<stdio.h>
void main()
{
 int i,l,m,s,rem,n=0;
 printf("\n enter the number");
 scanf("%d",&l);
 l=m;
 for(i=1;i<s;i++)
 {
  while(m!=0)
  {
   rem=m%10;
   n=n+rem*rem*rem;
   m=m/10;
   }
   if(n==l)
   {
   printf("The armstrong num is %d",n);
   }
   }
   }
