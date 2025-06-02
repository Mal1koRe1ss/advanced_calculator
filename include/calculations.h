#pragma once

#ifndef CALCULATIONS_H
#define CALCULATIONS_H

double fx(double x); // ? f(x) = x² + 2x - 5
double quadratic(double x); // ? Quadratic equation = 3x² - 4x + 1
double exponential(double x); // ? Exponential function = e^x + 5
double trig(double x); // ? Trigonometry = sin(x) + cos(x)
double len_circle_piece(double pi,double radius, double angle);
double celsius_to_fahrenheit(double celsius);
double fahrenheit_to_celsius(double fahrenheit);
double km_to_mi(double km);
double mi_to_km(double mi);

#endif