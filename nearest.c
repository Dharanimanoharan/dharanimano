#include<stdio.h>
void main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n %d",n);
    }
    else
    {
        printf("\n %d",n-1);
    }
}
