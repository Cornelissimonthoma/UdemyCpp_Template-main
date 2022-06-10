#include <iostream>

// ReturnType FunctionsName (ParameterList -Optional)
//{
// Function Code
//}

int user_input()
{
    int number;

    std::cout << "please, enter a number";
    std::cin >> number;

    return number;
}

bool is_even(int number)
{
    if (number % 2 == 0)
    {
        std::cout << number << " is even" << std::endl;
        return true;
    }
    else
    {
        std::cout << number << " is uneven" << std::endl;
        return false;
    }
}


int main()
{

    int my_number = user_input();
    std::cout << "return value from Function is " << my_number << std::endl;


    bool check_even = is_even(my_number);
    std::cout << std::boolalpha << check_even << std::endl;

    return 0;
}
