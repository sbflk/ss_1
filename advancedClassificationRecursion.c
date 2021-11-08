#include <stdio.h>
#include "NumClass.h"
#include <math.h>
int reverse(int a);
int calcArmstrong(int a, int size);

int isPalindrome(int a)
{
    if (a == reverse(a))
    {
        return 1;
    }
    return 0;
}

int reverse(int a)
{
    
    int size = (int)log10(a);

    if (a == 0)
    {
        return 0;
    }


    return ((a%10 * pow(10, size)) + reverse(a/10));
}


int isArmstrong(int a)
{
    int size = (int)log10(a) + 1;
    if (a == calcArmstrong(a, size))
    {
        return 1;
    }
    return 0;
}
int calcArmstrong(int a, int size)
{   
    if (a == 0)
    {
        return 0;
    }
    return (pow(a%10, size)) + calcArmstrong(a/10, size);
}
