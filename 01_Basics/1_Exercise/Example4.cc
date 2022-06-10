#include <iostream>

// Calculate perimeter and area of a Circle
// Console Input: Radius of a circle
// Console Output: print values (Perimeter, Area)

// Calculate Lap Year (conditions)
// divison by 4 (use modulo operator)
// if divison by 100 (true), than if division by 400 (true)


int main()
{
    // declare variables
    int year = 0;
    int lapyear = 0;

    // Condition 1: (division by 4 = true)
    bool checked1; // =  (year % 4 == 0);
    // Condition 2: (division by 100 = true) && (division by 400 = true)
    bool checked2; // = (year % 100 == 0) && (year % 400 == 0);
    //Condition: Lapyear checked (true)
    bool lapyear_checked = (checked1 || checked2);


    // enter value for the year
    std::cout << "Please enter a value for the year:" << std::endl;
    std::cin >> year;
    std::cout << "you entered the value: " << year << std::endl;


    // Calculate conditions for the lap year

    // Condition 1: (year % 4 == 0)
    if (year % 4 == 0)
    {
        lapyear = year;
        checked1 = true;
    }
    else
    {
        checked1 = false;
    }


    // Condition 2: (division by 100 = true) && (division by 400 = true)
    if ((year % 100 == 0) && (year % 400 == 0))

    {
        lapyear = year;
        checked2 = true;
    }

    else
    {
        checked2 = false;
    }


    // final test if checked1 or checked2 = true
    if (checked1 || checked2)
    {
        std::cout << "year = Lapyear : " << lapyear << std::endl;
    }
    else
    {
        std::cout << "year = no Lapyear : " << year << std::endl;
    }


    return 0;
}
