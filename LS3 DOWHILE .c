#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	printf("Even numbers list :\n");
	n=2;
	do{
		printf("%d ",n);
		n=n+2;
	}while (n<=50);
	
	printf("\nOdd numbers list :\n");
	n=1;
	do{
		printf("%d ",n);
		n=n+2;
	}while (n<=50);
	
	return 0;
}
