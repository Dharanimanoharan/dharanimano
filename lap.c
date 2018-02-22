#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int k,i;
    printf("Enter the string");
    scanf("%s",a);
    printf("Enter the value of k");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf(" %c", a[i]);
    }
}
