#ifndef BOAT_H
#define BOAT_H

#include <cell.h>
#include <array>
#include <vector>
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
        return isDestroyed;
    }
    void setIsDestroyed(bool _isDestroyed) {
        isDestroyed = _isDestroyed;
    }

    BoatType getBoatType() {
        return boatType;
    }
    void setBoatType(BoatType _boatType) {
        boatType = _boatType;
    }

    int getLength() {
        return length;
    }
    void setLength(int &_length) {
        length = _length;
    }

    std::string toString() {
        std::string tempStr("Boat type: ");
        tempStr.append(1, display());
        tempStr.append(". Length: ");
        tempStr += std::to_string(length);
        return tempStr;
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
    int length;
};

#endif // BOAT_H
