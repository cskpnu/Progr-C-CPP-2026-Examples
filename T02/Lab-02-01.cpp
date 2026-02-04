// Lab-02-01.cpp
#include <iostream>

using namespace std;

int main() {
    double x, y;
    cout << "Enter x, y: ";
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "Quadrant I";
    else if (x < 0 && y > 0)
        cout << "Quadrant II";
    else if (x < 0 && y < 0)
        cout << "Quadrant III";
    else if (x > 0 && y < 0)
        cout << "Quadrant IV";
    else
        cout << "Point is on the axis";

    return 0;
}
