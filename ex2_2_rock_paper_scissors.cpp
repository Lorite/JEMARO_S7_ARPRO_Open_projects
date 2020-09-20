#include "ex2_2_rock_paper_scissors.h"
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <random>       // std::random_device
#include <array>        // std::array
#include <string>       // std::string

ex2_2_rock_paper_scissors::ex2_2_rock_paper_scissors()
{

}

int main() {
    unsigned int player_pick = 3, cpu_pick = 3, calc_output = 0;
    char player_pick_c;
    const std::array<char,3> RPS = {'r', 'p', 's'};
    const std::array<std::string,3> RPS2 = {"rock", "paper", "scissors"};
    std::random_device device;
    std::mt19937 generator(device());

    //while(calc_output == 0) {
    while(1) {
        // player pick
        while (player_pick > 2 || player_pick < 0) {
            std::cout << "Type ";
            for (int i = 0; i < 3; i++) {
                std::cout << RPS.at(i) << " (" << RPS2.at(i) << "), ";
            }
            std::cout << ": ";
            std::cin >> player_pick_c;
            player_pick = std::distance(RPS.begin(), std::find(RPS.begin(),RPS.end(),player_pick_c));
            if (player_pick > 2 || player_pick < 0)
                std::cout << "Error. Char not recognized." << std::endl;
        }
        std::cout << "Player picked " << player_pick << " (" << RPS2.at(player_pick) << ")" << std::endl;

        // cpu pick
        cpu_pick = std::uniform_int_distribution<unsigned int>{0, 2}(generator);
        std::cout << "CPU picked " << cpu_pick << " (" << RPS2.at(cpu_pick) << ")" << std::endl;

        // calc output
        calc_output = (player_pick - cpu_pick + 3 ) % 3;
        // reset picks
        player_pick = 3;
        cpu_pick = 3;

        // output
        switch (calc_output) {
        case 0: std::cout << "Draw" << std::endl;
            break;
        case 1: std::cout << "Player wins" << std::endl;
            break;
        case 2: std::cout << "CPU wins" << std::endl;
            break;
        }
    }

    return 0;
}
