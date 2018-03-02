#include<stdio.h>
void main()
{
    int a[20],i,r,s,count=0;
    printf("\n Enter the value of r");
    scanf("%d",&r);
    printf("\n Enter the value of s");
    scanf("%d",&s);
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<r;i++)
    {
        if(a[i]=s)
        {
            count++;
        }
    }
    printf("\n %d",count);
}
