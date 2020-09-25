#include "ex2_1_find_number_reverse.h"
#include <iostream>
#include <random>

ex2_1_find_number_reverse::ex2_1_find_number_reverse()
{

}

int main() {
    std::random_device device;
    std::mt19937 generator(device());

    int numberGenerated = -1, numberGuessed = -1, minGuessed = 1, maxGuessed = 100;

    std::cout << "Make the computer guess the number between 1 and 100." << std::endl << "Input a number: ";
    std::cin >> numberGenerated;


    while(numberGuessed != numberGenerated) {
        numberGuessed = std::uniform_int_distribution<int>{minGuessed, maxGuessed}(generator);
        std::cout << "Computer entered: " << numberGuessed << std::endl;
        if (numberGuessed < numberGenerated) {
            std::cout << "The number entered is too low!" << std::endl;
            minGuessed = numberGuessed + 1;
        } else if (numberGuessed > numberGenerated) {
            std::cout << "The number entered is too high!" << std::endl;
            maxGuessed = numberGuessed - 1;
        } else
            std::cout << "Congratulations! Computer won." << std::endl;
    }

    return 0;
}
