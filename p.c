#include<stdio.h>
void main()
{
    int n,i,k,temp,a[20];
    printf("\nEnter the number: ");
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
     temp=n%10;
     a[i]=temp;
     n=n/10;
     i++;
     }
     printf("\nThe numbers in array is: ");
     for(k=i-1;k>=0;k--)
     {
     printf("%d\t",a[k]); 
     }
}
