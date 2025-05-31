#include <stdio.h>

double circle_area(double pi, int radius) {
    return pi * (radius*radius);
}

double trapezoid_area(double a,double b, double h) {
    return ((a+b)/2) * h;
}

double rhombus_area(double a, double b) {
    return (a*b)/2;
}

double rhombus_areav2(double a, double b) {
    return a*b;
}

void polygon(double n) {
    double sides = (int)n;
    printf("Total Diagonal (From one edge) : %f\n", (sides-3));
    printf("Total Triangle : %f\n", (sides-2));
    printf("Sum of interior angle(s) : %f\n", (sides-2)*180);
    printf("Total Diagonal(s) : %f\n", ((sides*(n-3))/2));
}

double triangle_area(double a, double h) {
    return (a*h)/2;
}

double square_area(double a, double b) {
    return a*b;
}