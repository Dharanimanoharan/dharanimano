#include<stdio.h>
void main()
{
    int n1,n2,power;
    printf("\n Enter the number n1");
    scanf("%d",&n1);
    printf("\n Enter the number n2");
    scanf("%d",&n2);
    power=pow(n1,n2);
    printf("\n The power of number is %d",power);
}
