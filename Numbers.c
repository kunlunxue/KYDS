#include <stdio.h>
#include "Numbers.h"

int GetNextPrime(int currentPrime)
{
    int result = -1;

    return result;
}

int IsPrime(int number)
{
    if (number < 2)
    {
        return -1;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return -1;
        }
    }
    return 1;
}