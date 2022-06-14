#include <iostream>


int main()
{
    unsigned int n;

    unsigned long nfact = 1;

    n = 5; // faculty


    for (unsigned int i = 0; i < n; i++)
    {
        if ((n == 0) || (n == 1))
        {
            nfact = 1;
        }
        else
        {
            nfact = nfact * (n - i);
            std::cout << "n! = " << nfact << std::endl;
        }
    }


    return 0;
}
