#include<stdio.h>
#include<conio.h>
void point(int**);
void main()
{
    int a=5,*p1,*p2;
    clrscr();
    p1=&a;
    printf("\n The value of p1 is %d",*p1);
    point(&p1);
    getch();
}

void point(int **s)
{
    printf("\n The value of s is %d",**s);
}

