#include<stdio.h>
#include<math.h>
#include "sqroot.h"
#include "power.h"
int main()
{
	int a = 5;
	int b = 3;
	double powerof = power(a,b);
	double squareof = square(a);
	printf("square of the number : %lf\n",squareof);
	printf("power of the number : %lf\n",powerof);
	return 0;
}
