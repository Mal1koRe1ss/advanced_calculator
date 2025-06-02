#pragma once

#ifndef PERIMETER_CALCULATIONS_H
#define PERIMETER_CALCULATIONS_H

double square_perimeter(double a);
double triangle_perimeter(double a, double b, double c);
double circle_perimeter(double pi, double radius);
double parallelogram_perimeter(double a, double b);
double equilateral_triangle_perimeter(double a);
double ngen_perimeter(double n, double a);
double trapezoid_perimeter(double a, double b, double c, double d);
double circle_arc_perimeter(double center_angle, double pi, double radius);
double circle_piece_perimeter(double center_angle, double pi, double radius);
double elipse_perimeter(double pi, double big_radius, double small_radius);
double cardioid_perimeter(double a);

#endif