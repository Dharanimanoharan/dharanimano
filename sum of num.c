#include<stdio.h>
void main()
{
    int a[10],i,sum=0,n;
    printf("\n Enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\n The sum is %d",sum);
    }
    
