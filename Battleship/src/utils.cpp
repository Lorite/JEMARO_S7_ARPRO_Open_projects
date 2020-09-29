#include <utils.h>

 void Utils::waitInputConsole() {
    std::cout << "Press ENTER to continue...";
    std::cin.ignore(100, '\n');
}
