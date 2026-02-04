// Lab-02-02.cpp
#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double min_val = a; // Припускаємо, що a - найменше

    if (b < min_val) min_val = b; // Якщо b менше, оновлюємо мінімум
    if (c < min_val) min_val = c; // Якщо c ще менше, оновлюємо

    cout << "Minimum: " << min_val << endl;
    return 0;
}
