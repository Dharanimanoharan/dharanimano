#include<stdio.h>
#include<conio.h>
void main()
{
int number,digit,sum=0;
clrscr();
printf("\n Enter the number");
scanf("%d",&number);
while(number!=0)
{
digit=number%10;
number=number/10;
sum=sum+digit;
}
printf("\n The sum of digit is %d",sum);
getch();
}
