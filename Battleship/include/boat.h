#ifndef BOAT_H
#define BOAT_H

#include <cell.h>
#include <array>
#include <vector>

enum class BoatType {
    AIRCRAFT,
    CRUISER,
    DESTROYER,
    SUBMARINE,
    MINESWEEPER,
    NONE
};

struct Boat {
    //std::array<Cell, int> boatParts;
    bool isDestroyed = false;
    BoatType boatType = BoatType::NONE;
    int length;

    char display() {
        switch(boatType) {
        case BoatType::AIRCRAFT:
            return 'A';
        case BoatType::CRUISER:
            return 'C';
        case BoatType::DESTROYER:
            return 'D';
        case BoatType::SUBMARINE:
            return 'S';
        case BoatType::MINESWEEPER:
            return 'M';
        case BoatType::NONE:
            return '-';
        }
    }

    static std::vector<std::pair<BoatType, int>> allBoatLengths() {
        return {
            {BoatType::AIRCRAFT, 5},
            {BoatType::CRUISER, 4},
            {BoatType::DESTROYER, 3},
            {BoatType::SUBMARINE, 3},
            {BoatType::MINESWEEPER, 2}
        };
    }
};

#endif // BOAT_H
