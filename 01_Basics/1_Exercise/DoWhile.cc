#include <iostream>


int main()
{

    int sum = 0;
    int input = 0;

    do

    {
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> input;
        sum += input;
        std::cout << "\ncurrent sum : " << sum << "\nPlease enter next value:\n ";

    } while (sum < 10);


    return 0;
}
