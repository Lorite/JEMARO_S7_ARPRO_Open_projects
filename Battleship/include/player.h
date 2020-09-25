#ifndef PLAYER_H
#define PLAYER_H

#include <array>
#include <cell.h>

class Player
{
public:
    Player();

    void placeBoats();
    void shoot(Player otherPlayer);
    void display(bool showBoats);
    bool hasLost();

    std::array<std::array<Cell, 10>, 10> grid;
};

#endif // PLAYER_H
