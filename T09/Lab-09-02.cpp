#include <iostream>
#include <fstream>

int main() {
    std::ifstream inFile("numbers.txt");
    std::ofstream outFile("positives_even.txt");

    if (!inFile.is_open() || !outFile.is_open()) {
        std::cerr << "Помилка доступу до файлів!\n";
        return 1;
    }

    int currentNumber;
    int count = 0;

    // Зчитуємо числа, поки вони є у файлі
    while (inFile >> currentNumber) {
        // Перевіряємо умову: число більше нуля і залишок від ділення на 2 дорівнює 0
        if (currentNumber > 0 && currentNumber % 2 == 0) {
            outFile << currentNumber << "\n";
            count++;
        }
    }

    std::cout << "Фільтрацію завершено. Знайдено та записано чисел: " << count << "\n";

    // Файли закриються автоматично
    return 0;
}
