#include<stdio.h>
void main()
{
    int a[20],i,b,k,count=0;
    printf("\n Enter the value of b");
    scanf("%d",&b);
    printf("\n Enter the value of k");
    scanf("%d",&k);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        if(a[k]==a[i])
        {
        printf("\n %d",a[i]);
        }
    
    }
}
