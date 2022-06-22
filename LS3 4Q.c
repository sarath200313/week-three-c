#include <stdio.h>

int main()
{
	int m,p=0,n=0,z=0;
	while(m!=999)
   {
	printf("Enter a number :");
	scanf("%d",&m);
	  if (m>0){
			p++;
		}
		else if (m<0){
			n++;
		}
		else if (m==0){
			z++;
		}
	}
	printf("Total positive numbers : %d\n",p);
	printf("Total negative numbers : %d\n",n);
	printf("Total zeroes : %d\n",z);
	return 0;
}
