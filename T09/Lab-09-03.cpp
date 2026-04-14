#include <iostream>
#include <fstream>

int main() {
    // Відкриваємо файл ОДНОЧАСНО для читання (in) і запису (out) у бінарному режимі
    std::fstream file("data.bin", std::ios::in | std::ios::out | std::ios::binary);

    if (!file.is_open()) {
        std::cerr << "Не вдалося відкрити data.bin\n";
        return 1;
    }

    double currentNum, maxNum;
    int currentIndex = 0;
    int maxIndex = -1;

    // Читаємо перше число, щоб зробити його початковим максимумом
    if (file.read(reinterpret_cast<char*>(&maxNum), sizeof(double))) {
        maxIndex = 0;
        currentIndex = 1;

        // Шукаємо максимальний елемент та його порядковий номер (індекс)
        while (file.read(reinterpret_cast<char*>(&currentNum), sizeof(double))) {
            if (currentNum > maxNum) {
                maxNum = currentNum;
                maxIndex = currentIndex;
            }
            currentIndex++;
        }

        std::cout << "Знайдено максимум: " << maxNum << " на позиції " << maxIndex << "\n";

        // --- Етап заміни ---
        // Скидаємо прапорці помилок потоку (бо ми дійшли до кінця файлу під час пошуку)
        file.clear();

        // Переміщуємо вказівник ЗАПИСУ на позицію максимального елемента
        // Зміщення = індекс * розмір одного числа
        file.seekp(maxIndex * sizeof(double), std::ios::beg);

        // Записуємо нуль поверх старого числа
        double zero = 0.0;
        file.write(reinterpret_cast<char*>(&zero), sizeof(double));

        std::cout << "Елемент успішно замінено на 0.\n";

    } else {
        std::cout << "Файл порожній!\n";
    }

    return 0;
}
