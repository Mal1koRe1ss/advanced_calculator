double calculate_kinetic_energy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}

double calculate_gravitational_force(double m1, double m2, double distance) {
    const double G = 6.67430e-11; // ? Gravity constant
    return G * m1 * m2 / (distance * distance);
}