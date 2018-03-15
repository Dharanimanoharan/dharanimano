#include<stdio.h>
void main()
{
    char a[20];
    int i,r,count;
    printf("\n Enter the string");
    scanf("%s",a);
    r=strlen(a);
    for(i=0;i<r;i++)
    {
        if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        {
            count=count+1;
        }
    }
    printf("\n total number of numeric character in the string is %d",count);
    
}
