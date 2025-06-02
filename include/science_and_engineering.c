#include <math.h>

double calculate_sin(double pi, double angle_deg) {
    return sin(angle_deg * pi / 180.0);
}

double calculate_cos(double pi, double angle_deg) {
    return cos(angle_deg * pi / 180.0);
}

double calculate_ln(double x) {
    return log(x);
}

double calculate_log10(double x) {
    return log10(x);
}
