#include<stdio.h>
#include<conio.h>
void main()
{
int num,digit,sum=0;
clrscr();
printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
num=num/10;
sum=sum+digit;
}
printf("\n The sum of digit is %d",sum);
getch();
}
