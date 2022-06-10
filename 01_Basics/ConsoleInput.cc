#include <iostream>


int main()
{

    float number1;
    float number2;
    float result;


    // Input Data into the Console

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> number1;


    std::cout << "Please enter another number:" << std::endl;
    std::cin >> number2;


    // calculation operations + output result

    // Mul: number1*number2


    result = number1 * number2;
    // Output Console
    std::cout << "number1 * number2 =" << result << std::endl;

    // Add: number1+number2
    result = number1 + number2;
    // Output Console
    std::cout << "number1 + number2 =" << result << std::endl;

    // Sub: number1-number2
    result = number1 - number2;
    // Output Console
    std::cout << "number1 - number2 =" << result << std::endl;

    // Div: number1/number2
    result = number1 / number2;
    // Output Console
    std::cout << "number1 / number2 =" << result << std::endl;


    return 0;
}
