#ifndef XY_H
#define XY_H

// Candidate solution for Rastrigin's function

class XY {
public:
    XY();

    void randomize();

    void computeCost();

    double evaluate() const {
        return cost;
    }

    void print();

    XY cross(XY other);

    void mutate();

private:
    double x, y;
    double cost;

};

#endif // XY_H
