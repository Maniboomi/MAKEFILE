#include<stdio.h>
#include "check.h"
int prime(int num,int n)
{
        for(int i=2;i<=n;i++)
        {
                if(num % i == 0)
                {
                	return 0;
                }
        }
        return 1;
}

