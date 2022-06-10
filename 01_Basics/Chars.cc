#include <iostream>


int main()
{

    char letter_a = 'A';

    std::cout << "letter A  = " << letter_a << std::endl;

    std::cout << "letter A  = " << (int)letter_a << std::endl;


    letter_a = letter_a + 32;

    std::cout << "letter A  = " << letter_a << std::endl;

    std::cout << "letter A  = " << (int)letter_a << std::endl;


    return 0;
}
