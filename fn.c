#include<stdio.h>
#include<conio.h>
void fn(int,int);
void main()
{
    int a=3,b=5;
    clrscr();
    fn(a,b);
    getch();
    }
    void fn(int c,int d)
    {
        int s;
        s=c+d;
        printf("\n The value of s is %d",s);
    }
