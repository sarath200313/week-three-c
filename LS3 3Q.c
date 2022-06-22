#include <stdio.h>

int main()
{
	int a,b,rev;
	b=0;
	printf("Enter the number:\n");
	scanf("%d",&a);
	while(a!=0)
	{
		rev=a%10;
		b=b*10+rev;
		a=a/10;
	}
	printf("Reversed number is: %d",b);
	return 0;
}
