#include <iostream>

//*************************************
// CST 27.05.2022 : 11:26 a.m.       **
//*************************************

//*************************************
// Basic Calculations               ***
// Mul: number1*number2             ***
// Add: number1+number2             ***
// sub: number1-number2             ***
// Div: number1/number2             ***
//*************************************


int main()
{
    // declare variables
    float number1 = 10.0;
    float number2 = 3.0;
    float result;

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
