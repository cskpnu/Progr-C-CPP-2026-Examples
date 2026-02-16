// Lab-03-05.cpp
#include <iostream>
#include <cmath>   // Для sin, abs

using namespace std;

int main() {
    const int N = 10;
    double x[N];

    // 1. Генерація
    x[0] = 0.3;
    x[1] = -0.3;
    double sum = x[0] + x[1];

    for (int i = 2; i < N; i++) {
        x[i] = i + sin(x[i - 2]);
        sum += x[i];
    }

    // 2. Середнє арифметичне
    double avg = sum / N;

    // 3. Пошук найближчого
    double closestVal = x[0];
    double minDiff = abs(x[0] - avg);

    for (int i = 1; i < N; i++) {
        double diff = abs(x[i] - avg);
        if (diff < minDiff) {
            minDiff = diff;
            closestVal = x[i];
        }
    }

    cout << "Середнє: " << avg << endl;
    cout << "Найближче число: " << closestVal << endl;
    return 0;
}
