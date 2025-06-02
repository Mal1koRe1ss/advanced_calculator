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

double celsius_to_fahrenheit(double celsius) {
    return ((celsius * 9.0) / 5.0) + 32;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return ((fahrenheit - 32) * 5.0) / 9.0;
}

double km_to_mi(double km) {
    return km * 0.6213711922;
}

double mi_to_km(double mi) {
    return mi * 1.609344;
}