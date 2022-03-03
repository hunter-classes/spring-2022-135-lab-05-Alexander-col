#include <iostream>
#include "funcs.h"

// Task A has been completed and returns what is asked of it 
bool isDivisibleBy(int n, int d)
{
    if (n%d == 0)
    {
        return true;
    }
    else if (n%d != 0)
    {
        return false;
    }

    return 0;
}

// Task B has been completed and returns what it is asked of 
bool isPrime(int n)
{
    int looper[n];
    int count;
    for (int i = 2; i != n; i++ )
    {
        looper[i] = i;
        if ((n%i) == 0)
        {
            return false;
        }
        else 
        {
            count++;
        }
    }

    if (count > 0)
    {
        return true;
    }
    //Couild create an array that could loop through all the numbers up until that point 

    return 0;
}



