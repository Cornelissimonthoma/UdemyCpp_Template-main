#include <iostream>


int main()
{

    int number;

    std::cout << "Please enter a number:[0,10]:" << std::endl;
    std::cin >> number;
    std::cout << "you entered number: " << number << std::endl;

    bool check3 = (number >= 0 && number <= 10);
    // Note: Negation of above condition (Check3)
    bool check1 = !(number >= 0 && number <= 10);

    if (check3)
    {
        std::cout << std::boolalpha << check3 << std::endl;
    }
    else
    {
        std::cout << std::boolalpha << !check1 << std::endl;
    }


    return 0;
}
