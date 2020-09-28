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
    void shoot(Player otherPlayer);
    void display(bool showBoats);
    bool hasLost();

    std::vector<Boat> boats;
    std::array<std::array<Cell, 10>, 10> grid;
};

#endif // PLAYER_H
