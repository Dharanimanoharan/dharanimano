#include<stdio.h>
void main()
{
    char a[20];int i,smallestnum,n;
    printf("\n Enter the number");
    scanf("%d",&n);
    smallestnum=a[0];
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]<smallestnum)
    {
        smallestnum=a[i];
    }
    }
    printf("%d",smallestnum);
}
