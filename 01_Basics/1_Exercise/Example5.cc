
#include <iostream>

// 1). User-Input: integer number
// 2). Compute if the number is a prime number
// 2). print out the result

// Check Prime
// if number divisible by itself or by 1 with a remainder of 0


int main()
{

    int number1;

    bool is_prime = true; //initial value

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> number1;
    std::cout << "you entered number: " << number << std::endl;


    for (int i = 2; i < number1; i++)
    {
        if (number1 % i == 0)
        {
            is_prime = false;
        }

        std::cout << "count = " << i << std::endl;


    } // for


    if (is_prime)
    {
        std::cout << number << "is a prime" << std::endl;
    }
    else
    {
        std::cout << number << "is not a prime" << std::endl;
    }


    return 0;
}
