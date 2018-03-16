#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("\n Enter the value of a&b");
    scanf("%d\t%d",&a,&b);
    printf("\n Enter the value of c&d");
    scanf("%d\t%d",&c,&d);
    e=a-c;
    f=b-d;
    printf("%d\t%d",e,f);
    return 0;
}
