#include<stdio.h>
#include<conio.h>
void main()
{
    int r,s,t;
    clrscr();
    printf("\n Enter the number r");
    scanf("%d",&r);
    printf("\n Enter the number s");
    scanf("%d",&s);
    t=r*s;
    if(t%2==0)
    {
        printf("\n even");
    }
    else
    {
        printf("\n odd");
    }
    getch();
    }
