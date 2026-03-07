#include <iostream>

// Рекурсивна функція суми квадратів
long long SumOfSquares(int N) {
    // 1. БАЗОВИЙ ВИПАДОК
    if (N <= 1) {
        return 1; // Сума квадратів до 1 дорівнює 1
    }

    // 2. РЕКУРСИВНИЙ КРОК
    return (N * N) + SumOfSquares(N - 1);
}

int main() {
    std::system("chcp 65001 > nul");

    int n = 4;
    // 1^2 + 2^2 + 3^2 + 4^2 = 1 + 4 + 9 + 16 = 30
    std::cout << "Сума квадратів до " << n << " дорівнює: " << SumOfSquares(n) << std::endl;

    return 0;
}
