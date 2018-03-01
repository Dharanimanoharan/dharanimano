#include <stdio.h>

void main()
{
int j,count=0,n;
printf("\n enter the number);
scanf("%d",&n);
for(j=2;j<n;j++)
{
if(n%j==0)
{
count++;    
}
    }
if(count!=0)
{
    printf("yes");
}
else
{
    printf("no");
}

}
