#ifndef GA_H
#define GA_H

//#include "xy.h"
#include <vector>
#include <algorithm>

using namespace std; // no need to write std::vector, just vector

int randInt(int max) {
    return rand() % max;
}

pair<int, int> twoDiffRandInt(int max) {
    int rand1 = randInt(max), rand2;
    do {
        rand2 = randInt(max);
    } while (rand2 == rand1);
    return {rand1, rand2};
}

template <class T>
bool operator<(const T &t1, const T &t2) {
    return t1.evaluate() < t2.evaluate();
}

template <class T>
T ga() {
    // params
    const int popSize(500);
    const int elitism(40);
    const int maxIter(30);

    int iter(0);

    // population
    vector<T> population(popSize);
    auto best = *min_element(population.begin(), population.end());
    nth_element(population.begin(), population.begin() + elitism, population.end());
    auto bestCost = best.evaluate();

    while (iter < maxIter) {

        // create new  population from 40 best elements of the previous one
        vector<T> newPopulation(population.begin(), population.begin()+elitism);

        // fill half of new population from 1 vs 1 tournaments
        for (int step = elitism; step < popSize / 2; ++step) {
            auto [n1, n2] = twoDiffRandInt(popSize); {} // use {} for fixing indentation
            newPopulation.push_back(min(population[n1], population[n2]));

        }

        // fill new population with crossings / mutations
        for (int step = popSize / 2; step < popSize; ++step) {
            auto [n1, n2] = twoDiffRandInt(popSize/2); {}
            newPopulation.push_back(newPopulation[n1].cross(newPopulation[n2]));
            newPopulation.back().mutate();

        }

        // put back to the current population
        population = newPopulation;

        // prepare next iteration
        best = *min_element(population.begin(), population.end());
        nth_element(population.begin(), population.begin() + elitism, population.end());
        best.print();

        // check if same best
        if (best.evaluate() < bestCost) {
            bestCost = best.evaluate();
            iter = 0;
        } else {
            iter++;
        }

    }

    return best;

}

#endif // GA_H
