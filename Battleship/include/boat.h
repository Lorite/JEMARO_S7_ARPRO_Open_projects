#ifndef BOAT_H
#define BOAT_H

#include <array>
#include <vector>
#include <cell.h>
#include <string>
#include <iostream>

enum class BoatType {
    AIRCRAFT,
    CRUISER,
    DESTROYER,
    SUBMARINE,
    MINESWEEPER,
    NONE
};

struct Cell;
struct Boat {
    Boat(){};

    char display() const {
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
            return 'o';
        }
    }

    bool getIsDestroyed() {
        /*for (auto boatPart : boatParts) {

        }*/
        return isDestroyed;
    }
    void setIsDestroyed(bool _isDestroyed) {
        isDestroyed = _isDestroyed;
    }

    BoatType &getBoatType() {
        return boatType;
    }
    void setBoatType(BoatType _boatType) {
        boatType = _boatType;
    }

    int getLength() {
        return lengthLeft;
    }
    void setLength(const int &_lengthLeft) {
        lengthLeft = _lengthLeft;
    }
    int &decreaseLength() {
        return --lengthLeft;
    }

    void addBoatPart(Cell *_boatPart) {
        boatParts.push_back(_boatPart);
    }

    std::string toString() {
        return "Boat type: " + std::string(1, display()) + ". Length left: " + std::to_string(lengthLeft);
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

private:
    bool isDestroyed = false;
    BoatType boatType = BoatType::NONE;
    int lengthLeft;
    std::vector<Cell*> boatParts;

};

#endif // BOAT_H
