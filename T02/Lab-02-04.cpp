// Lab-02-04.cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, R;
    cout << "Enter x, y, R: ";
    cin >> x >> y >> R;

    // Умова кола: x^2 + y^2 <= R^2
    if (x * x + y * y <= R * R) {
        cout << "YES (Inside)";
    } else {
        cout << "NO (Outside)";
    }
    return 0;
}
