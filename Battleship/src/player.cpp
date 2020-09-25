#include <player.h>
#include <boat.h>
#include <cell.h>
#include <iostream>

Player::Player()
{
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid.at(i).size(); j++) {
            grid.at(i).at(j) = Cell{i, j, false, CellType::WATER};
        }
    }
}

void Player::placeBoats(){
    for (const auto [boat, length] : Boat::allBoatLengths()) {
        for (int step = 0; step < length; step++) {

        }
    }
}

void Player::shoot(Player otherPlayer){

}

void Player::display(bool showBoats){
    // TODO different if showBoats true or false
    for (const auto &line: grid) {
        for (const Cell &cell: line) {
            std::cout << cell.display() << " ";

        }
        std::cout << std::endl;
    }
}

bool Player::hasLost(){
    return false;
}
