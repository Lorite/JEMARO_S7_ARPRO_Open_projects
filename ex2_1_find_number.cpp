#include "ex2_1_find_number.h"
#include <iostream>
#include <random>

Ex2_1_Find_number::Ex2_1_Find_number()
{

}

int main() {
    std::random_device device;
    std::mt19937 generator(device());

    std::uniform_int_distribution<> dice100(0, 100);
    int numberGenerated = dice100(generator);
    int numberGuessed = -1;

    std::cout << "Guess the number between 1 and 100." << std::endl;

    while(numberGuessed != numberGenerated) {
        std::cout << "Input a number: " << std::endl;
        std::cin >> numberGuessed;
        std::cout << "You entered: " << numberGuessed << std::endl;
        if (numberGuessed < numberGenerated)
            std::cout << "The number you entered is too low!" << std::endl;
        else if (numberGuessed > numberGenerated)
            std::cout << "The number you entered is too high!" << std::endl;
        else
            std::cout << "Congratulations! You won." << std::endl;
    }

    return 0;
}
