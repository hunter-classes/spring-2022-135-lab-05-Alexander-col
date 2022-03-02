#include <iostream>

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



int main()
{
    std::cout << isDivisibleBy(10,5) << std::endl;
    std::cout << isDivisibleBy(20,2) << std::endl;
    std::cout << isDivisibleBy(3,10) << std::endl;
    std::cout << isDivisibleBy(5,10) << std::endl;

    return 0;
}