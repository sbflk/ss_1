#include <stdio.h>
#include "NumClass.h"
int isStrong(int a)
{
    int sum = 0;
    int dup = a;
    while (dup != 0)
    {
        int num = dup%10;
        int factorial_sum = 1;
        for (int i = 1; i <= num; i++)
        {
            factorial_sum *= i;
        }
        sum += factorial_sum;
        dup /= 10;
    }
    if (a == sum)
    {
        return 1;
    }
    return 0;
    
}


int isPrime(int a)
{
    if(a < 4 && a > 0)
    {
        return 1;
    }
    for (int i = 2; i <= a/2; i++)
    {
        if (a%i == 0)
        {
            return 0;
        }
    }
    return 1;
}