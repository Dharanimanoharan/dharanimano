#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2,rev=0,rem;
 clrscr();
 printf("enter the number");
 scanf("%d",&n1);
 n2=n1;
 while(n1>0)
 {
  rem=n1%10;
  rev=rev*10+rem;
  n1=n1/10;
  if(n2==rev)
  {
   printf("\n The num is palindrome")
   }
   else
   {
    printf("\n The num is not palindrome");
    }
    }
    getch();
    }
