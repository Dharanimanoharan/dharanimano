#include<stdio.h>
#include<conio.h>
void add(int*,int*);
void main()
{
    int c=4,d=4;
    clrscr();
    add(&c,&d);
    getch();
}
void add(int*a,int*b)
{
    int *g;
    *g=*a+*b;
    printf("\n The addition of two number is %d",*g);
}
