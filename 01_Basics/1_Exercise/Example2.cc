#include <iostream>

// Calculate perimeter and area of a Circle
// Console Input: Radius of a circle
// Console Output: print values (Perimeter, Area)

// Perimeter Circle = 2*pi*r
// Area Circle = pi*(r*r)


int main()
{

    double radius;
    double pi = 3.141519;

    // enter value of the radius  (r)
    std::cout << "Please enter a value for r:" << std::endl;
    std::cin >> radius;
    std::cout << "you entered a value: " << radius << std::endl;


    // Calculate perimeter (2*pi*radius)
    double perimeter = 2 * pi * radius;

    // Output Console (Perimeter)
    std::cout << "The Perimeter of the circle =" << perimeter << std::endl;
    // alternative (print without variable)
    //std::cout << "Perimeter =" << 4 * a << std::endl;


    // Calculate Area pi*(radius*radius)
    double area = pi * (radius * radius);
    // Output Console (Perimeter)
    std::cout << "The Area of the circle  =" << area << std::endl;


    return 0;
}
