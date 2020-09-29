#ifndef CELL_H
#define CELL_H

#include <boat.h>

struct Cell {

    Cell(){}

    Cell(int _pos_x, int _pos_y, bool _isHit, Boat &_boat) {
        pos_x = _pos_x;
        pos_y = _pos_y;
        isHit = _isHit;
        boat = &_boat;
    }

    char display(bool showBoats) const {
        if (isHit)
            return 'x';
        else
            if (!showBoats)
                return 'o';
            else
                return boat->display();

    }

    bool getIsHit() {
        return isHit;
    }
    void setIsHit(bool _isHit) {
        this->isHit = _isHit;
    }
    Boat *getBoat() {
        return boat;
    }
    void setBoat(Boat &_boat) {
        boat = &_boat;
        boat->addBoatPart(this);
    }

private:
    int pos_x, pos_y;
    bool isHit;
    Boat *boat;
};

#endif // CELL_H
