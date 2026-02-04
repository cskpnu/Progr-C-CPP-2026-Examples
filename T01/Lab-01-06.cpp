// Lab-01-06.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Зчитуємо число (наприклад, 47)

    // n / 10 — цілочисельне ділення (47 / 10 = 4)
    // n % 10 — остача від ділення (47 % 10 = 7)
    cout << n / 10 << " " << n % 10 << endl;

    return 0;
}
