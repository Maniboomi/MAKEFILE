#include<stdio.h>
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"
int main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
        scanf("%d",&b);
	printf("ADD = %d\n",add(a,b));
	printf("SUBTRACT = %d\n",subtract(a,b));
	printf("MULTIPLY = %d\n",multiply(a,b));
	printf("DIVIDE = %.2f\n",divide(a,b));
	return 0;
}

