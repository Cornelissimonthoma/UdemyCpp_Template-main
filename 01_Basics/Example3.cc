#include <iostream>

// calc absolute integer (x)
// x <0 -> absolute x
// x > -> no action needed


int main()
{

    int x;

    std::cout << "Please enter a number for x:" << std::endl;
    std::cin >> x;
    std::cout << "you entered number: " << x << std::endl;

    if (x < 0)
    {
        x = abs(x);
    }


    std::cout << "absolute value of x : " << x << std::endl;


    return 0;
}
