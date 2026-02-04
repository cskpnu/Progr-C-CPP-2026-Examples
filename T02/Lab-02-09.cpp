// Lab-02-09.cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double eps = 0.001;
    double sum = 0, term = 1.0; // term - перший член ряду
    int n = 1;

    do {
        sum += term;
        // Формула для наступного члена (наприклад, 1/n^2)
        n++;
        term = 1.0 / (n * n);
    } while (term > eps);

    cout << "Sum = " << sum << ", Iterations = " << n << endl;
    return 0;
}
