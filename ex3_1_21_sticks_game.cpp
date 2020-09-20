#include "ex3_1_21_sticks_game.h"
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <random>       // std::random_device
#include <array>        // std::array
#include <string>       // std::string

ex3_1_21_sticks_game::ex3_1_21_sticks_game()
{

}

int main() {
    int total_sticks = 21, temp_sticks = 0;
    bool human_turn = true;
    std::random_device device;
    std::mt19937 generator(device());

    while (total_sticks > 0) {
        if (human_turn) { // human turn
            while (temp_sticks < 1 || temp_sticks > 3) {
                std::cout << "How many sticks would you like to pick up? (1-3): ";
                std::cin >> temp_sticks;
                if (temp_sticks < 1 || temp_sticks > 3)
                    std::cout << "Error. Please input correct value." << std::endl;

            }
        } else { // cpu turn
            // temp_sticks = std::uniform_int_distribution<unsigned int>{1, 3}(generator); // random
            temp_sticks = (total_sticks + 3) % 4; // AI
            if (temp_sticks == 0) {
                temp_sticks = std::uniform_int_distribution<unsigned int>{1, 3}(generator);
            }
        }

        total_sticks -= temp_sticks;

        if (human_turn)
            std::cout << "User picked ";
        else
            std::cout << "CPU picked ";
        std::cout << temp_sticks << " sticks. Remaining: " << total_sticks << std::endl;

        if (total_sticks <= 0) { // end game
            if (human_turn)
                std::cout << "User lost.";
            else
                std::cout << "CPU lost.";
        }

        // reset sticks
        human_turn = !human_turn;
        temp_sticks = 0;

    }
    return 0;
}
