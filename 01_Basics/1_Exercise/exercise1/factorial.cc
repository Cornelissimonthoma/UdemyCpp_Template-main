#include <iostream>


unsigned long long factorial(unsigned long n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}


int main()

{

    unsigned int n = 8;

    std::cout << "n! is " << factorial(n) << std::endl;


    return 0;
}
