#include<stdio.h>
void main()
{
    int n,l,r,i,count;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    printf("\n Enter the value of l");
    scanf("%d",&l);
    printf("\n Enter the value of r");
    scanf("%d",&r);
for(i=l;i<r;i++)
{
    if(n==i)
    {
        printf("\n Yes");
       count++;
    }
}
if(count==0)
{
    printf("\n No");
    
}
}


