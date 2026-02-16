// Lab-03-01.cpp
#include <iostream>

using namespace std;

int main() {
    int k[] = {5, 12, 3, 8, 1}; // Кількість кісточок у кожного оленя
    int n = 5; // Кількість оленів
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += k[i];
    }

    cout << "Загальна кількість саджанців: " << sum << endl;
    return 0;
}
