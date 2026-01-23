// Lab-01-02.cpp
#include <iostream>
using namespace std;

int main() {
    const double KM_IN_MILE = 1.60934; // Константа переведення

    double speed_mph;
    cout << "Enter speed (mph): ";
    cin >> speed_mph;

    double speed_kmh = speed_mph * KM_IN_MILE;

    // Щоб перевести км/год у м/с, треба поділити на 3.6 (1000 м / 3600 с)
    double speed_ms = speed_kmh / 3.6;

    cout << "Speed in km/h: " << speed_kmh << endl;
    cout << "Speed in m/s:  " << speed_ms << endl;

    return 0;
}
