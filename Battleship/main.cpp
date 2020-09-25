#include <player.h>
#include <iostream>
#include <string>
#include <regex>
#include <stdlib.h>

int main() {
    // variables
    std::array<Player, 2> players = {Player(), Player()};
    bool gameOver = false;

    // instructions
    std::cout << "Welcome to battleship game!!! Remember that top left corner is position 0,0 and bottom left corner is position 9,9." << std::endl << std::endl;

    // set boats' positions
    for (int i = 0; i < players.size(); ++i) {
        int tempSelection = 0;
        while(tempSelection != 1 && tempSelection != 2) {
            std::cout << "Player " << i+1 <<". Enter 1 to manually place the boats or 2 to do it automatically: ";
            std::cin >> tempSelection;
            if (tempSelection == 1) { // manual boat positions
                // TODO manual boat positions

            } else if (tempSelection == 2) { // automatic boat positions
                // TODO automatic boat positions

            } else {
                std::cout << "Error." << std::endl;
            }
        }
    }

    std::system("clear");  // clear console

    // main  game loop
    while(!gameOver) {
        for (int i = 0; i < players.size(); ++i) {
            // info
            std::cout << "PLAYER " << i+1 << " TURN." << std::endl << std::endl;

            // display
            for (int j = 0; j < players.size(); ++j) {
                std::cout << "Player " << j+1 << " grid: " << std::endl;
                players.at(j).display(i==j);
                std::cout << std::endl;
            }

            // shoot
            if (!players.at(i).hasLost()) {
                std::string tempSelection = "";
                std::string tempRegexSelectionStr = "(\\d\\,\\d)";
                std::regex refexSelection(tempRegexSelectionStr);
                while(!std::regex_match(tempSelection.c_str(), refexSelection)) {
                    std::cout << "Player " << i+1 <<" turn to shoot. Select where you want to shoot \"x,y\": ";
                    std::cin >> tempSelection;

                    if (!std::regex_match(tempSelection.c_str(), refexSelection)) {
                        std::cout << "Error." << std::endl;
                    }
                }
                players.at(i).shoot(players.at((i+1)%players.size()));

            } else {
                gameOver = true;
            }

            std::system("clear");  // clear console
        }

    }

	return 0;
} 
