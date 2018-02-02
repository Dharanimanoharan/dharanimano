#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter the a value");
scanf("%d",&a);
printf("\n enter the b value");
scanf("%d",&b);
printf("\n Before swapping %d%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n after swapping %d%d",a,b);
getch();
}
