#include<stdio.h>
#include "fibo.h"
#include "fiboo.h"
int main()
{
	int n;
	int fibo;
	int fiboo;
	printf("Enter a number :");
	scanf("%d",&n);
	fibo = fibonacci(n);
	fiboo = fibonaccii(n,0,1);
	printf("The fibonacci series using loop is : %d\n",fibo);
	printf("The fibonacci series using recursion is : %d\n",fiboo);
	return 0;
}

