// Lab-01-05.cpp
#include <iostream>
#include <cmath> // Для sin, cos, pow, M_PI

// Якщо M_PI не визначено у вашому компіляторі, розкоментуйте рядок нижче:
// const double M_PI = 3.14159265358979323846;

using namespace std;

int main() {
    double x_deg;
    cout << "Enter angle x (in degrees): ";
    cin >> x_deg;

    // 1. Переведення в радіани
    double x_rad = x_deg * M_PI / 180.0;

    // 2. Обчислення за формулою
    // Увага: cos^2(x) записується як pow(cos(x), 2) або cos(x)*cos(x)
    double z = pow(cos(x_rad), 2) + sin(2 * x_rad);

    cout << "Result z = " << z << endl;

    return 0;
}
