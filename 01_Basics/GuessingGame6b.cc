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
// number = 2: wooden spoon
// else: you lost


void game()
{

    // int number_tries = 0;
    int number;
    // int new_numb;

    bool has_won = false;

    // std::cout << "Please enter a number for the tries:" << std::endl;
    //std::cin >> number_tries;
    //std::cout << "you have entered number of tries : " << number_tries << std::endl;

    std::cout << " Welcome to my quessing game ! " << std::endl;

    do
    {
        std::cout << "Please enter a number:[0,10]:" << std::endl;
        std::cin >> number;
        std::cout << "you entered number: " << number << std::endl;


        // test valid value range
        if (number >= 0 && number <= 10)
        {
            if (number == 4)
            {
                std::cout << "right quess: you won )- " << std::endl;
                has_won = true;
            }

            // Check  Division by 2
            else if (number % 2 == 0)
            {
                std::cout << "you won a wooden spoon " << std::endl;
            }
            // if.. else if

            else
            {
                std::cout << "wrong quess: you lost -(; " << std::endl;
            }
        } // if

        // check equality condition
    } while (has_won == false);
}


int main()

{

    game();


    return 0;
}
