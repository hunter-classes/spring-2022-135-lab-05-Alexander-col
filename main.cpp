#include <iostream>
#include "funcs.h"
int main()

{
    std::cout << isDivisibleBy(10,5) << std::endl;
    std::cout << isDivisibleBy(20,2) << std::endl;
    std::cout << isDivisibleBy(3,10) << std::endl;
    std::cout << isDivisibleBy(5,10) << std::endl;
    std::cout << "-------------------------------\n";
    std::cout << isPrime(2) << std::endl;
    std::cout << isPrime(3) << std::endl;
    std::cout << isPrime(5) << std::endl;
    std::cout << isPrime(17) << std::endl;
    std::cout << isPrime(11) << std::endl;
    std::cout << isPrime(13) << std::endl;
    std::cout << isPrime(25) << std::endl;
    std::cout << "-------------------------------\n";

    return 0;
}