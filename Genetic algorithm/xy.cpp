#include "xy.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>

double randBetween(double min, double max) {
    double rand01 = ((double) rand()) / RAND_MAX;
    return min + (max-min)*rand01;
}

XY::XY() {
    randomize();
}

void XY::randomize() {
    x = randBetween(-5, 5);
    y = randBetween(-5, 5);
    computeCost();
}

void XY::computeCost() {
    cost = 20 + x*x + y*y - 10*(cos(2*M_PI*x) + cos(2*M_PI*y));
}

XY XY::cross(XY other) {
    XY newIndividual;
    const double a(randBetween(0, 1));

    newIndividual.x = a*x + (1-a)*other.x;
    newIndividual.y = a*y + (1-a)*other.y;

    return newIndividual;
}

void XY::mutate(){
    x += randBetween(-0.1, 0.1);
    y += randBetween(-0.1, 0.1);
    computeCost();
}

void XY::print() {
    std::cout << cost << " at (" << x << ", " << y << ")" << std::endl;
}
