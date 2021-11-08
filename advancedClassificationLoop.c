#include <stdio.h>
#include "NumClass.h"
int isPalindrome(int a)
{
    int reversed = 0;
    int dup = a;
    while (dup !=0)
    {
        reversed *= 10;
        reversed += dup%10;
        dup /= 10;
    }
    if (reversed == a)
    {
        return 1;
    }
    return 0;
    
}

int isArmstrong(int a)
{
    int dup = a;
    int size = 0;
    while (dup != 0)
    {
        dup /= 10;
        size += 1;
    }
    
    int sum = 0;
    int dup1 = a;
    while (dup1 != 0)
    {
        int n = dup1%10;
        int power_sum = 1;
        for (int i = 0; i < size; i++)
        {
            power_sum *= n;
        }
        sum += power_sum;
        dup1 /= 10;
    }
    if (sum == a)
    {
        return 1;
    }
    return 0;
    
    
}

