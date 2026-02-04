// Lab-02-11.cpp
#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    // Працюємо з модулем числа
    if (n < 0) n = -n;

    while (n > 0) {
        int digit = n % 10; // Остання цифра
        sum += digit;
        n /= 10;            // Відкидаємо останню цифру
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
