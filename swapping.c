#include<stdio.h>
#include<conio.h>
void point(int*,int*);
void main()
{
    int a=2,b=4;
    clrscr();
    point(&a,&b);
    getch();
}
void point(int*c,int*d)
{
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    printf("\n swapping of two number is %d\n%d",*c,*d);
}
