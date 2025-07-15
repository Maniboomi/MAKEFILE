#include<stdio.h>
int fibonacci(int n)
{
        int i;
        int first = 0;
        int second = 1;
        int third;
        for(i=2;i<n;i++)
        {
                third = first + second;
                first = second;
                second = third;
        }
        return third;
}
