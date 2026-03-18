#include "tasks.h"

// Чиста математика: без cin/cout
// Функції з Банку 01
void convertSpeed(double speed_mph, double& speed_kmh, double& speed_ms) {
    const double KM_IN_MILE = 1.60934;
    speed_kmh = speed_mph * KM_IN_MILE;
    speed_ms = speed_kmh / 3.6;
}

// Функції з Банку 02
int getQuadrant(double x, double y) {
    if (x > 0 && y > 0) return 1;
    if (x < 0 && y > 0) return 2;
    if (x < 0 && y < 0) return 3;
    if (x > 0 && y < 0) return 4;
    return 0; // На осі
}

double calculatePiecewise(double x) {
    if (x < 0) return x * x;
    if (x <= 5) return __builtin_sqrt(x); // Або підключити <cmath> і використати sqrt(x)
    return 2 * x;
}
