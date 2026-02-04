// Lab-02-10.cpp
#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    long long product = 1; // Увага: добуток ініціалізуємо 1, а не 0!

    for (int i = 1; i <= N; i++) {
        product *= i;
    }

    cout << N << "! = " << product << endl;
    return 0;
}
