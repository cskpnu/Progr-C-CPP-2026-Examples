// Lab-02-08.cpp
#include <iostream>
#include <cmath>
#include <iomanip> // Для setw() – визначає ширину виведення

using namespace std;

int main() {
    double a = 0, b = 2, h = 0.5;
    cout << "  x   |   y  " << endl;
    cout << "------|------" << endl;

    for (double x = a; x <= b + 0.001; x += h) {
        double y = sin(x) * x;
        cout << fixed << setprecision(2) << setw(5) << x << " | " << setw(5) << y << endl;
    }
    return 0;
}
