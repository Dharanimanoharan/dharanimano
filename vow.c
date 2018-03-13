#include<stdio.h>
void main()
{
 char s[5];
 int i,count;
 printf("enter the vowels");
 scanf("%s",s);
 for(i=0;i<5;i++)
 {
 if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
 {
 count++;
 }
}
if(count==0)
{
    printf("\n No");
}
else
{
    printf("\n Yes");
}
}
