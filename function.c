#include<stdio.h>
#include<conio.h>
void circle(int);
void rectangle();
int square(int);
float triangle(int,int);
void main()
{
    int r,a,b,h,n;float j;
    clrscr();
    printf("\n enter the radius of circle");
    scanf("%d",&r);
    circle(r);
    printf("\n Enter the value of square");
    scanf("%d",&a);
    n=square(a);
    printf("\n The area of square is %d",n);
    printf("\n Enter the value of triangle");
    scanf("\n%d\n%d",&b,&h);
    j=triangle(b,h);
    printf("\n The area of triangle is %f",j);
    getch();
    }
    void circle(int s)
    {
        
        printf("\n the radius of circle is %.2f",(3.14)*s*s);
    }
    void rectangle()
    {
        int l,b;
        printf("\n Enter the value of rectangle");
        scanf("\n%d,\n%d",&l,&b);
        printf("\n The area of rectangle is %d",l*b);
    }
    int square(int t)
    {
        
        return (t*t);
    }
    float triangle(int d,int h)
    {
        
        return (0.5*d*h);
    }
    
    
    



