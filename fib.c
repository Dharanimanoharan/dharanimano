#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=0,b=1,c,i,n;
 printf("\n enter the number");
 scanf("%d",&n);
 printf("\n The number %d%d",a,b);
 for(i=2;i<n;i++)
 {
  c=a+b;
   a=b;
   b=c;
   }
   printf("\n The factorial of num is %d",c);
   getch();
   }
 
