#include <iostream>


unsigned long long factorial(unsigned int n);
{
    if (n > 0)
    {
        return n * factorial(n);
    }
    else
    {
        return 1;
    }
}


int main()
{
    unsigned long long n;

    std::cout << "n! = " << factorial(n);

    return 0;
}
