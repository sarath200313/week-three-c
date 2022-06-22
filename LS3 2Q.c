#include <stdio.h>

int main()
{
	int a=0,b=1,c=0,st,end;
	printf("Enter the starting number :");
	scanf("%d",&st);
	printf("Enter the ending number:");
	scanf("%d",&end);
	while(c<=end)
  {
	 if(c>=st)
	{
		printf("%d ",c);
	}
	a=b;
	b=c;
	c=a+b;
  }
	return 0;
}
