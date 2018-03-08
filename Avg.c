
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    float Avg;
    char a[10];
    printf("\n Enter the number of values");
    scanf("%d",&n);
    printf("\n Enter the number of array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    Avg=sum/n;
    printf("\n Avg value is %2f",Avg);
}
