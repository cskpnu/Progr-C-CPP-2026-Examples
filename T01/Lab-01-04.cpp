// Lab-01-04.cpp
#include <iostream>
using namespace std;

int main() {
    double mass, velocity;

    cout << "Enter mass (kg) and velocity (m/s): ";
    cin >> mass >> velocity;

    // Варіант запису без pow (швидше для простих квадратів)
    double energy = (mass * velocity * velocity) / 2.0;

    cout << "Kinetic Energy: " << energy << " Joules" << endl;

    return 0;
}
