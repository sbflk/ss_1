#include <stdio.h>
#include "NumClass.h"
#include <math.h>
int isArmstrong(int a);
int isPalindrome(int a);
int isPrime(int a);
int isStrong(int a);


int main()
{
    int min;
    scanf("%d", &min);
    int max;
    scanf("%d", &max);

    if (min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }
    
    printf("The Armstrong numbers are:");
    for (int i = min; i < max; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf(" %d", i);
        }
        
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = min; i < max; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf(" %d", i);
        }
        
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i = min; i < max; i++)
    {
        if (isPrime(i) == 1)
        {
            printf(" %d", i);
        }
        
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i = min; i < max; i++)
    {
        if (isStrong(i) == 1)
        {
            printf(" %d", i);
        }
        
    }
    printf("\n");
}