#include <stdio.h>

int main(void) {
	int n,s,reverse=0;
	printf("\n Enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
	s=n%10;
	reverse=reverse*10+s;
	n=n/10;
	}
	printf("%d",reverse);
	return 0;
}
