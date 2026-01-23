// Lab-01-03.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double leg1, leg2;
    cout << "Enter two legs of the triangle: ";
    cin >> leg1 >> leg2;

    // pow(x, 2) підносить до квадрату, sqrt() бере корінь
    double hypotenuse = sqrt(pow(leg1, 2) + pow(leg2, 2));

    double area = 0.5 * leg1 * leg2; // Важливо писати 0.5, а не 1/2 (бо 1/2 дасть 0)
    double perimeter = leg1 + leg2 + hypotenuse;

    cout << "Hypotenuse: " << hypotenuse << endl;
    cout << "Area:       " << area << endl;
    cout << "Perimeter:  " << perimeter << endl;

    return 0;
}
