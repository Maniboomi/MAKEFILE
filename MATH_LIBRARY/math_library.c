#include<stdio.h>
#include<math.h>
#include "sqroot.h"
#include "power.h"
int main()
{
	int a = 25;
	int b = 3;
	int powerof = power(a,b);
	float squareof = square(a);
	printf("square root of the number : %.2f\n",squareof);
	printf("power of the number : %d\n",powerof);
	return 0;
}
