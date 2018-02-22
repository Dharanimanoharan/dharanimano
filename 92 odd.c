#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("\n Enter the number");
    scanf("%d",&a);
    printf("\n Enter the number");
    scanf("%d",&b);
    c=a+b;
    if(c%2==0)
    {
        printf("\n even");
    }
    else
    {
        printf("\n odd");
    }
    getch();
}
