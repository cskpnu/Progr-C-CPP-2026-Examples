// Lab-03-04.cpp
#include <iostream>
#include <algorithm> // Для swap

using namespace std;

int main() {
    const int N = 3;
    int A[N] = {1, 2, 3};
    int B[N] = {10, 20, 30};

    for (int i = 0; i < N; i++) {
        swap(A[i], B[i]);
    }

    cout << "Масив A після обміну: ";
    for (int x: A) cout << x << " "; // {10, 20, 30}

    cout << "\nМасив B після обміну: ";
    for (int x: B) cout << x << " "; // {1, 2, 3}

    return 0;
}
