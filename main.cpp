#include <iostream>
#include "funcs.h"
int main()

{
    std::cout << "Task A" << std::endl;
    std::cout << "Dividing 10 by 5: " << isDivisibleBy(10,5) << std::endl;
    std::cout << "Dividing 20 by 2: " << isDivisibleBy(20,2) << std::endl;
    std::cout << "Dividing 3 by 10: " << isDivisibleBy(3,10) << std::endl;
    std::cout << "Dividing 5 by 10: " << isDivisibleBy(5,10) << std::endl;
    std::cout << "-------------------------------\n";
    std::cout << "Task B" << std::endl;
    std::cout << "Is 2 prime? " << isPrime(2) << std::endl;
    std::cout << "Is 3 prime? " << isPrime(3) << std::endl;
    std::cout << "Is 5 prime? " << isPrime(5) << std::endl;
    std::cout << "Is 17 prime? " << isPrime(17) << std::endl;
    std::cout << "Is 11 prime? " << isPrime(11) << std::endl;
    std::cout << "Is 13 prime? " << isPrime(13) << std::endl;
    std::cout << "Is 24 prime? " << isPrime(25) << std::endl;
    std::cout << "-------------------------------\n";
    std::cout << "Task C" << std::endl;
    std::cout << "Prime after 5: " << nextPrime(5) << std::endl;
    std::cout << "Prime after 10: " << nextPrime(10) << std::endl;
    std::cout << "Prime after 15: " << nextPrime(15) << std::endl;
    std::cout << "-------------------------------\n";
    std::cout << "Task D " << std::endl;
    
    std::cout << "Primes from 20-30: " << countPrimes(20,30) << std::endl;
    std::cout << "Primes from 30-40: " << countPrimes(30,40) << std::endl;
    std::cout << "Primes from 40-50: " << countPrimes(40,50) << std::endl;
    std::cout << "-------------------------------\n";
    std::cout << "Task E " << std::endl;
    std::cout << "Is 5 twin prime? " << isTwinPrime(5) << std::endl;
    std::cout << "Is 10 twin prime? " << isTwinPrime(10) << std::endl;
    std::cout << "Is 11 twin prime? " << isTwinPrime(11) << std::endl;
    std::cout << "Is 19 twin prime? " << isTwinPrime(19) << std::endl;
    std::cout << "-------------------------------\n";
    std::cout << "Task F " << std::endl;
    std::cout << "Whats the twin prime after 13? " << nextTwinPrime(13) << std::endl;
    std::cout << "Whats the twin prime after 17? " << nextTwinPrime(17) << std::endl;
    std::cout << "whats the twin prime after 19? " << nextTwinPrime(19) << std::endl;
    std::cout << "-------------------------------\n";
    std::cout << "Task G " << std::endl;
    std::cout << "Whats the largrest twim prime from 10-30? " << largestTwinPrime(10,30) << std::endl;
    std::cout << "Whats the largrest twim prime from 40-60? " << largestTwinPrime(40,60) << std::endl;
    std::cout << "Whats the largrest twim prime from 1-11? " << largestTwinPrime(1,10) << std::endl;

    return 0;
}