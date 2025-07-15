#include<stdio.h>
#include<math.h>
#include "check.h"
int main()
{
	int num;
	int final;
	printf("Enter a number : ");
	scanf("%d",&num);
	int n = sqrt(num);
	final = prime(num,n);
	if(final == 1)
	{
		printf("The given number is not a prime %d\n",num);
	}
	else
	{
		printf("The given number is prime %d\n",num);
	}
	return 0;
}
