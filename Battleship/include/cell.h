#ifndef CELL_H
#define CELL_H

enum class CellType {
    BOATPART,
    WATER
};

struct Cell {
    int pos_x, pos_y;
    bool isHit;
    CellType cellType;

    char display() const {
        if (isHit)
            return 'x';
        else
            return 'o';
    }
};

#endif // CELL_H
