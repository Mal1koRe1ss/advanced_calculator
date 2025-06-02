#include <math.h>

double square_perimeter(double a) {
    return 4*a;
}

double triangle_perimeter(double a, double b, double c) {
    return a+b+c;
}

double circle_perimeter(double pi, double radius) {
    return (2*pi)*radius;
}

double parallelogram_perimeter(double a, double b) {
    return 2*(a+b);
}

double equilateral_triangle_perimeter(double a) {
    return 3*a;
}

double ngen_perimeter(double n, double a) {
    return n*a;
}

double trapezoid_perimeter(double a, double b, double c, double d) {
    return a+b+c+d;
}

double circle_arc_perimeter(double center_angle, double pi, double radius) {
    return (center_angle/360)*2*pi*radius;
}

double circle_piece_perimeter(double center_angle, double pi, double radius) {
    return (2*radius + (center_angle/360)) * 2 * pi * radius;
}

double elipse_perimeter(double pi, double big_radius, double small_radius) {
    double h = pow(big_radius - small_radius, 2) / pow(big_radius + small_radius, 2);
    return pi * (big_radius + small_radius) * (1 + (3*h)/(10 + sqrt(4 - 3*h)));
}

double cardioid_perimeter(double a) {
    return 8 * a;
}