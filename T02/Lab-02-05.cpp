// Lab-02-05.cpp
#include <iostream>

using namespace std;

int main() {
    double x, y, r, R;
    cout << "Enter x, y, r, R: ";
    cin >> x >> y >> r >> R;

    double d2 = x * x + y * y; // Квадрат відстані до центру

    // Точка має бути далі за мале коло (>= r^2) і ближче за велике (<= R^2)
    if (d2 >= r * r && d2 <= R * R) {
        cout << "Inside Ring";
    } else {
        cout << "Outside Ring";
    }
    return 0;
}
