#include <iostream>

// Equal: ==
// Not Equal: !=
// Geater Equal: >=
// Less Equal: <=
// Greater: >
// Less: <

// And: &&
// OR : ||

// if
// else if (0 times or more)
// else  (0 times or once)

// Game Rules
// number = 4: you won
// number = 2: you won a wooden spoon
// else: you lost

int main()

{

    int number;
    int new_numb;


    std::cout << "Please enter a number:[0,10]:" << std::endl;
    std::cin >> number;
    std::cout << "you entered number: " << number << std::endl;


    // test valid value range
    if (number >= 0 && number <= 10)
    {
        if (number == 4)
            std::cout << "right quess: you won )- " << std::endl;

        else if (number == 2)
        {
            std::cout << "you won a wooden spoon " << std::endl;
        }
        // if.. else if

        else
        {
            std::cout << "wrong quess: you lost -(; " << std::endl;
        }
    } // if


    else
    // test unvalid value range
    {
        std::cout << "Please enter a new number [0,10]: " << std::endl;
        std::cin >> new_numb;
        std::cout << " you entered number: " << new_numb << std::endl;
    }
    // else

    return 0;
}
