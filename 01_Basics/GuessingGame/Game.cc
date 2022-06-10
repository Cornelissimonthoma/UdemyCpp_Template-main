#include <iostream>


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
