#include <iostream>


int main()
{
    for (int i = 2; i < 4; i += 1)
    {
        std::cout << i << std::endl;
    }

    for (int i = 2; i < 4; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
