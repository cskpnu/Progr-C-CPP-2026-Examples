#include <iostream>
#include <cmath> // Для abs(), щоб коректно обробляти від'ємні числа

// Рекурсивна функція підрахунку парних цифр
int CountEvenDigits(int K) {
    K = std::abs(K); // Відкидаємо знак мінус

    // 1. БАЗОВИЙ ВИПАДОК
    if (K == 0) {
        return 0; // Число закінчилося, рахувати нічого
    }

    // 2. РЕКУРСИВНИЙ КРОК
    int lastDigit = K % 10;
    int isEven = (lastDigit % 2 == 0) ? 1 : 0; // Якщо парна - дає 1, інакше 0

    // Додаємо 1 (або 0) до результату обробки решти числа
    return isEven + CountEvenDigits(K / 10);
}

int main() {
    std::system("chcp 65001 > nul");

    int number = 27495;
    std::cout << "У числі " << number << " парних цифр: " << CountEvenDigits(number) << std::endl;
    // Виведе 2 (бо парні тут лише 2 і 4)

    return 0;
}
