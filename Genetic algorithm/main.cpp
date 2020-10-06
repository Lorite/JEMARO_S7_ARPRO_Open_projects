#include "ga.h"
#include "xy.h"

int main() {
//    XY xy;
//    // xy.randomize();
//    // xy.computeCost();
//    xy.print();

    auto best = ga<XY>();
    best.print();

	return 0;
} 
