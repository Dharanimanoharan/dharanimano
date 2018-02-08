#include<stdio.h>
void main()
{
 int k,count;
 char a[40];
 printf("\n Enter the string");
 scanf("%[^\n]s",a);
 for(k=0;a[k]!='\0';k++)
 {
  if(a[k]!=' ')
  {
  count=count+1;
  }
  }
  printf("\n count is %d",count);
  }
