#include <iostream>
#include <math.h>

double fexpression(double x)
{
   return (5 * x * x) - 5 * x + 3; //f = 5x² - 5x - c;
}

double fexpressionDer(double x, double eps)
{
   return (fexpression(x+eps) - fexpression(x))/eps;
}

double Alg1Dfuncmin(double startingX, int iterMax, double gainLambda, double minGradinentGm) {
    double minX = startingX;
    int iter = 0;
    double gradG = 2 * minGradinentGm;
    while((iter < iterMax) && (abs(gradG) > minGradinentGm)) {
        gradG = fexpressionDer(minX, 0.00001);
        minX -= gainLambda*gradG;
        std::cout << minX << std::endl;
        iter++;
    }
    return minX;
}

int main() {
    double minX = Alg1Dfuncmin(0, 100000, 0.0001, 0.000001);
    std::cout << "The minimum is " << minX << "." << std::endl;
	return 0;
} 
