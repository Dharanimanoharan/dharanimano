#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,l,count=0;
 printf("enter the number");
 scanf("%d",&i,&j);
 for(k=i;k<j;k++)
 {
  for(l=2;l<j;l++)
  {
   if(k%l==0)
   {
    count++;
    }
    }
    }
    if(count!=1)
    {
     printf("not a prime");
     }
     }
