#include<stdio.h>
void main()
{
int i,count;
char a[100];
printf("\n Enter the string");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
}
}
printf("\n space is %d",count);
}
