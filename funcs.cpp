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

//vvv Task D this is going to return all fo the primes numbs thare are within the interval; vvv
int countPrimes(int a, int b)
{
    int nPrimeCount = 0;
    int primeCount = 0;
    for (int i = a; i != b; i++)
    {
        for (int j = 2; j !=i; j++ )
        {
            if(i%j == 0)
            {
                nPrimeCount++;
                break;
            }
        }
        if (nPrimeCount == 0)
        {
            primeCount++;
        }
        nPrimeCount = 0;

    }
    return primeCount;
}
//VV Task E is completed bellow and checks to see if what was given is a prim number
bool isTwinPrime(int n)
{
    int lessTwo = (n-2);
    int moreTwo = (n+2);
    int ltc = 0;
    int mtc = 0;
    for (int i = 2; i != lessTwo; i++)
    {
        // std::cout << i << std::endl;
        if(lessTwo%i == 0)
        {
            ltc++;
        }
    }
    for (int i = 2; i != moreTwo; i++)
    {
        // std::cout << i << std::endl;
        if(moreTwo%i == 0)
        {
            mtc++;
        }
    }

    if (ltc == 0 || mtc == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//VV Task F is completed bellow and checks to see if what was given is a prim number
int nextTwinPrime(int n)
{   int answer = (n+1);
    int lessTwo = (answer-2);
    int moreTwo = (answer+2);
    int ltc = 0;
    int mtc = 0;
    int foundPrime = 0;
    while (foundPrime != 1)
    {
    for (int i = 2; i != lessTwo; i++)
    {
        // std::cout << i << std::endl;
        if(lessTwo%i == 0)
        {
            ltc++;
        }
    }
    for (int i = 2; i != moreTwo; i++)
    {
        // std::cout << i << std::endl;
        if(moreTwo%i == 0)
        {
            mtc++;
        }
    }
    // std::cout << ltc << "\n" << mtc << std::endl;

    if (isPrime(answer) == true && (ltc == 0 || mtc == 0))
    {
        foundPrime++;
    }
    else
    {
        ltc = 0;
        mtc = 0;
        lessTwo++;
        moreTwo++;
        answer++;
    }
    }
    return answer;
}
//VV Task G is completed bellow and checks and goes backwards rather than going forwards!

int largestTwinPrime(int a, int b) 
{ 
    int largest_twin_prime = -1; 
    for(int i = b; i >= a; i--) 
    { 
        if(isTwinPrime(i)) 
        { 
            largest_twin_prime = nextTwinPrime(i - 1);
            break;
        }
    }

    return largest_twin_prime;
}