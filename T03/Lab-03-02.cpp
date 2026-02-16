// Lab-03-02.cpp
#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 2, 5, 2, 8, 2, 15};
    int n = 7;

    // Крок 1: Пошук мінімуму
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }

    // Крок 2: Підрахунок
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != minVal) count++;
    }

    cout << "Мінімум: " << minVal << endl;
    cout << "Кількість елементів, відмінних від мінімуму: " << count << endl;
    return 0;
}
