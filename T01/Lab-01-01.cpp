// Lab-01-01.cpp
#include <iostream>
#include <cmath>    // Потрібна для sqrt() та fabs()
#include <iomanip>  // Потрібна для setprecision (красиве виведення)

using namespace std;

int main() {
    double a, b;

    cout << "Enter a and b: ";
    cin >> a >> b;

    double arithmetic_mean = (a + b) / 2.0;
    // fabs(x) повертає модуль дійсного числа |x|
    double geometric_mean = sqrt(fabs(a) * fabs(b));

    cout << fixed << setprecision(3); // Налаштування: 3 знаки після коми
    cout << "Arithmetic mean: " << arithmetic_mean << endl;
    cout << "Geometric mean: " << geometric_mean << endl;

    return 0;
}
