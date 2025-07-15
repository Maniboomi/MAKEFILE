#include<stdio.h>
int fibonaccii(int n,int a,int b)
{
        if(n==1)
        {
                return a;
        }
        return fibonaccii(n-1, b, a+b);
}

