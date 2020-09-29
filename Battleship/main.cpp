#include <player.h>
#include <utils.h>
#include <iostream>
#include <string>
#include <regex>
#include <stdlib.h>

int main() {
    // variables
    std::array<Player, 2> players = {Player(), Player()};
    bool gameOver = false;

    // instructions
    std::cout << "Welcome to battleship game!!! Remember that top left corner is position 0,0 and bottom left corner is position 9,9." << std::endl
              << "Remember that x are columns and y are rows." << std::endl << std::endl;

    // set boats' positions
    for (int i = 0; i < players.size(); ++i) {
        int tempSelection = 0;
        while(tempSelection != 1 && tempSelection != 2) {
            std::cout << "Player " << i+1 <<". Enter 1 to manually place the boats or 2 to do it automatically: ";
            std::cin >> tempSelection;
            std::cin.get();
            if (tempSelection == 1) { // manual boat positions
                // TODO manual boat positions

            } else if (tempSelection == 2) { // automatic boat positions
                players.at(i).placeBoats();

            } else {
                std::cout << "Error." << std::endl;
            }
        }
    }

    Utils::waitInputConsole();
    std::system("clear");  // clear console

    // main  game loop
    while(!gameOver) {
        for (int i = 0; i < players.size(); ++i) {
            // info
            std::cout << "PLAYER " << i+1 << " TURN." << std::endl;
            Utils::waitInputConsole();

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
                std::regex regexSelection(tempRegexSelectionStr);
                int posXSelected, posYSelected, shotOK = 0;
                bool regexOK = false;
                do {
                    do {
                        std::cout << "Player " << i+1 <<" turn to shoot. Select where you want to shoot \"x,y\": ";
                        std::cin >> tempSelection;
                        std::cin.get();

                        if (!std::regex_match(tempSelection.c_str(), regexSelection)) {
                            std::cout << "Error. Bad input." << std::endl;
                            regexOK = false;
                        } else {
                            posXSelected = tempSelection.at(0) - '0';
                            posYSelected = tempSelection.back() - '0';
                            regexOK = true;
                        }
                    } while(!regexOK);

                    shotOK = players.at(i).shoot(players.at((i+1)%players.size()), posXSelected, posYSelected);
                    if (shotOK == 0)
                        std::cout << "Error. Already shot there." << std::endl;
                    else {
                        if (shotOK == 1)
                            std::cout << "You hit the water." << std::endl;
                        else if (shotOK == 2)
                            std::cout << "You hit a boat!" << std::endl;
                        else if (shotOK == 3)
                            std::cout << "You destroyed a boat!" << std::endl;
                    }
                } while(shotOK == 0);


            } else {
                gameOver = true;
            }

            Utils::waitInputConsole();
            std::system("clear");  // clear console
        }

    }

	return 0;
} 
