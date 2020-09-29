#ifndef PLAYER_H
#define PLAYER_H

#include <array>
#include <vector>
#include <cell.h>
#include <boat.h>
#include <cell.h>
#include <iostream>
#include <random>

class Player
{
public:
    Player();

    void placeBoats();
    int shoot(Player &otherPlayer, int posX, int posY); // 0: already tried, 1 miss, 2 hit
    void display(bool showBoats);
    bool hasLost();

    std::vector<Boat*> boats;
    std::array<std::array<Cell, 10>, 10> grid;
};

#endif // PLAYER_H
