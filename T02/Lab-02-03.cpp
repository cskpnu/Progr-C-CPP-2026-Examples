// Lab-02-03.cpp
#include <iostream>

using namespace std; // swap() знаходиться тут, swap() – обмін значеннями між двома змінними

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a > b) swap(a, b); // Якщо a більше b, міняємо їх місцями
    if (b > c) swap(b, c); // Тепер найбільше число в кінці (в с)
    if (a > b) swap(a, b); // Ще раз перевіряємо перші два

    cout << "Sorted: " << a << " " << b << " " << c << endl;
    return 0;
}
