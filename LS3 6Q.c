#include <stdio.h>

int main()
{
	int b,e,i,n=1;
	printf("Enter base value(b):");
	scanf("%d",&b);
	printf("Enter exponential value(e):");
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	  n=n*b;
	printf("%d raised to %d gives %d",b,e,n);
	return 0;
}
