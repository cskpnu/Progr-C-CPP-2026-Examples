// Lab-02-06.cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Enter x: ";
    cin >> x;

    if (x < 0) {
        y = x * x;
    } else if (x <= 5) { // Тут x вже точно >= 0
        y = sqrt(x);
    } else {
        y = 2 * x;
    }

    cout << "y = " << y << endl;
    return 0;
}
