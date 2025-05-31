#include <math.h>

double fx(double x) {
    // ? f(x) = (x)² + 2*(x) - 5
    return ((x+x)*(x+x)) + 5;
}

double quadratic(double x) {
    // ? 3x² - 4x + 1
    return 3*x*x - 4*x + 1;
}

double exponential(double x) {
    // ? e^x + 5
    return exp(x) + 5;
}

double trig(double x) {
    return sin(x) + cos(x);
}

double len_circle_piece(double pi,double radius, double angle) {
    return 2*pi*radius*(angle/360);
}