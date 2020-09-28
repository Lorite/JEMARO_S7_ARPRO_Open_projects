#include <player.h>

Player::Player()
{
    // set all cells to water
    Boat tempBoat = Boat();
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid.at(i).size(); j++) {
            grid.at(i).at(j) = Cell(i, j, false, tempBoat);
        }
    }

}

void Player::placeBoats(){
    // create random generator
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<> dice100(0, 99);

    // create boats
    for (const auto [_boatType, _length] : Boat::allBoatLengths()) {
        Boat tempBoat = {};
        tempBoat.setBoatType(_boatType);
        int cellGenerated, step;
        for (step = 0; step < _length; step++) {
            do{
                cellGenerated = dice100(generator);
            } while(grid.at(cellGenerated/10).at(cellGenerated%10).getBoat().getBoatType() != BoatType::NONE);
            grid.at(cellGenerated/10).at(cellGenerated%10).setBoat(tempBoat);
        }
        tempBoat.setLength(step);
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
    // TODO different if showBoats true or false
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
