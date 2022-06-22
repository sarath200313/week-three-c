#include <stdio.h>

int main()
{
    int n;
    printf("Even Numbers List :\n");
    for (n=2;n<=50;n=n+2)
    {
		printf("%d ",n);
	}
	printf("\nOdd Numbers List :\n");
    for (n=1;n<=50;n=n+2)
    {
		printf("%d ",n);
	}
	return 0;
}
