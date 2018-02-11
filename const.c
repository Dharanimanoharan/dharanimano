#include<stdio.h>
#include<conio.h>
void main()
{
  const int a=5;
    int*p;
    clrscr();
    p=&a;
    printf("\n The value of a is %d",a);
    *p=4;
    printf("\n The value of a is %d",a);
    getch();
}
