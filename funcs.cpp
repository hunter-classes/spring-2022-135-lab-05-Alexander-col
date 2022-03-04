#include <iostream>
#include "funcs.h"

// vvv Task A has been completed and returns what is asked of it vvv
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

// vvv Task B has been completed and returns what it is asked of vvv
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

// vvv Task C has been completed and returns what it is asked of vvv
int nextPrime(int n)
{
    // Its going to be diffucly keeping track off what is not prime rather than if it is pirme
    // I wil now go to the previous task to use some of that code
    
    int value = (n+1);
    int answer = (n+1);
    int primeCount = 0;
    int nPrimeCount = 0;

    while (primeCount < 1)
    {
        // std::cout << "nPrimeCount is : " << nPrimeCount << std::endl;
        for (int i = 2; i != value; i++)
        {
            if (value%i == 0)
            {
                // std::cout << "Is a not a prime num" << std::endl;
                nPrimeCount++;
            }

        }
        if (nPrimeCount > 0)
        {
            value++;
            answer++;
            
        }
        else if (nPrimeCount == 0)
        {
            primeCount++;
        }
        nPrimeCount = 0; 

    }
    // std::cout << nPrimeCount << std::endl;

    return answer;
}

