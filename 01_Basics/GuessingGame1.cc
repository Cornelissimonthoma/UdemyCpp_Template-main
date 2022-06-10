#include <iostream>

int main()

{

    int number;

    std::cout << "Please enter a number:[0,10]:" << std::endl;
    std::cin >> number;
    std::cout << "you entered number: " << number << std::endl;


    // test valid value range
    if (number >= 0 && number <= 10)
    {
        std::cout << "right quess: you win )- " << std::endl;
    }

    else
    // test unvalid value range
    {
        std::cout << "wrong quess: you lost -(; " << std::endl;
    }

    return 0;
}
