#include <iostream>


void mod_cross_sum(int I, int J)
{
    // int sum = 0;

    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            /// int sum = 0;

            std::cout << "i: " << i << "j: " << j;
            //sum = (i + j);

            if ((i + j) % 2 == 0)
            {
                std::cout << ":= Gerade!\n";
            }
            else
            {
                std::cout << ":= Ungerade!\n";
            }
        }
    }
}
