#include<stdio.h>
void main()
{
 int i,count;
 char b[40];
 printf("\n Enter the string");
 scanf("%[^\n]s",&b);
 for(i=0;b[i]!='\0';i++)
 {
  if(b[i]==' ')
  {
  count=count+1;
  }
  }
  printf("\n The number of word is %d",count);
  }
