#include <iostream>

// Рекурсивна функція з розгалуженням
long long SeqA(int N) {
    // 1. БАЗОВІ ВИПАДКИ (відомі початкові значення)
    if (N == 1) return 2;
    if (N == 2) return 3;

    // 2. РЕКУРСИВНИЙ КРОК
    return 2 * SeqA(N - 1) + SeqA(N - 2);
}

int main() {
    std::system("chcp 65001 > nul");

    int n = 5;
    // A_1 = 2
    // A_2 = 3
    // A_3 = 2*3 + 2 = 8
    // A_4 = 2*8 + 3 = 19
    // A_5 = 2*19 + 8 = 46
    std::cout << n << "-й член послідовності: " << SeqA(n) << std::endl;

    return 0;
}
