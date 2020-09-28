#include <player.h>

Player::Player()
{
    // set all cells to water
    Boat tempBoat = Boat();
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid.at(i).size(); j++) {
            grid.at(i).at(j) = Cell(j, i, false, tempBoat);
        }
    }

}

void Player::placeBoats(){
    // create random generator
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<> dice2(0, 1);
    std::uniform_int_distribution<> dice10(0, 9);

    // create boats
    for (const auto [_boatType, _length] : Boat::allBoatLengths()) {
        Boat tempBoat = {};
        tempBoat.setBoatType(_boatType);
        bool orientationGeneratedIsVertical; // 0 = horizontal, 1 = vertical
        int cellXGenerated, cellYGenerated;
        bool posGeneratedOK = false;

        // generate random orientation
        orientationGeneratedIsVertical = dice2(generator);

        // generate random pos x,y and check if ok depending on orientation
        do {
            posGeneratedOK = true;
            // generate randoms
            if (orientationGeneratedIsVertical) {
                cellXGenerated = dice10(generator);
                cellYGenerated = std::uniform_int_distribution<int>{0, 9 - _length}(generator);
                for (int i = 0; i < _length; i++) { // check OK
                    posGeneratedOK &= (grid.at(cellYGenerated + i).at(cellXGenerated).getBoat().getBoatType() == BoatType::NONE);
                }
            } else {
                cellXGenerated = std::uniform_int_distribution<int>{0, 9 - _length}(generator);
                cellYGenerated = dice10(generator);
                for (int i = 0; i < _length; i++) { // check OK
                    posGeneratedOK &= (grid.at(cellYGenerated).at(cellXGenerated + i).getBoat().getBoatType() == BoatType::NONE);
                }
            }

        } while(!posGeneratedOK);

        // fill positions next to generated starting pos
        if (orientationGeneratedIsVertical)
            for (int i = 0; i < _length; i++)
                grid.at(cellYGenerated + i).at(cellXGenerated).setBoat(tempBoat);
        else
            for (int i = 0; i < _length; i++)
                grid.at(cellYGenerated).at(cellXGenerated + i).setBoat(tempBoat);

        // save bot in player
        tempBoat.setLength(_length);
        boats.push_back(tempBoat);
    }

    for (auto boat: boats) {
        std::cout << boat.toString() << " boat placed OK." << std::endl;
    }
    std::cout << std::endl;
}

void Player::shoot(Player otherPlayer){

}

void Player::display(bool showBoats){
    for (const auto &line: grid) {
        for (const Cell &cell: line) {
            std::cout << cell.display(showBoats) << " ";

        }
        std::cout << std::endl;
    }
}

bool Player::hasLost(){
    return false;
}
