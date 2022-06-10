#include <iostream>

// Calculate perimeter and area of a square
// Console Input: side length of a square
// Console Output: print values


int main()
{

    double a;


    // enter value of side length  (a)
    std::cout << "Please enter a value for a:" << std::endl;
    std::cin >> a;
    std::cout << "you entered a value: " << a << std::endl;


    // Calculate perimeter (2a+2a = 4a)
    double perimeter = 4 * a;


    // Output Console (Perimeter)
    std::cout << "Perimeter =" << perimeter << std::endl;
    // alternative (print without variable)
    //std::cout << "Perimeter =" << 4 * a << std::endl;


    // Calculate square (a*a)
    double area = a * a;
    // Output Console (Perimeter)
    std::cout << "The are  =" << area << std::endl;


    return 0;
}
