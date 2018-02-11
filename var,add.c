#include<stdio.h>
#include<conio.h>
void main()
{
    int a=2,*p;
    char b='h',*q;
    float c=4.3,*r;
    double d=35.12,*s;
    clrscr();
    p=&a;
    q=&b;
    r=&c;
    s=&d;
    printf("\n The value of int a is %d",a);
    printf("\n The address of int a is %p",a);
    printf("\n The value of char b is %c",b);
    printf("\n The address of char b is %p",b);
    printf("\n The value of float c is %f",c);
    printf("\n The address of float c is %p",c);
    printf("\n The value of double d is %lf",d);
    printf("\n The address of double d is %p",d);
    printf("\n The value of pointer p is %d",p);
    printf("\n The address of pointer p is %p",p);
    printf("\n The value of pointer q is %d",q);
    printf("\n The address of pointer q is %p",q);
    printf("\n The value of pointer r is %d",r);
    printf("\n The address of pointer r is %p",r);
    printf("\n The value of pointer s is %d",s);
    printf("\n The address of pointer s is %p",s);
getch();
}
