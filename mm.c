#include<stdio.h>
void main()
{
    char a[20];
    int i,n,max,min;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
  for(i=1;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
    if(a[i]<min)
    {
        min=a[i];
    }
}
printf("\n max num is %d",max);
printf("\n min num is %d",min);
}
