#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main() {
    std::ifstream inFile("text.txt");
    if (!inFile.is_open()) {
        std::cerr << "Помилка: не вдалося відкрити файл text.txt\n";
        return 1;
    }

    std::string word;
    std::cout << "Слова, що починаються і закінчуються однаково:\n";

    // Зчитуємо текст слово за словом
    while (inFile >> word) {
        // Очищаємо слово від розділових знаків з кінця (наприклад, "Hello," -> "Hello")
        while (!word.empty() && std::ispunct(word.back())) {
            word.pop_back();
        }

        // Очищаємо з початку (наприклад, '"Word' -> 'Word')
        while (!word.empty() && std::ispunct(word.front())) {
            word.erase(0, 1);
        }

        // Перевіряємо довжину (слово має мати хоча б 2 літери для порівняння)
        if (word.length() > 1) {
            // Переводимо першу і останню літери в нижній регістр для коректного порівняння
            char firstLetter = std::tolower(word.front());
            char lastLetter = std::tolower(word.back());

            if (firstLetter == lastLetter) {
                std::cout << "- " << word << "\n";
            }
        }
    }

    inFile.close();
    return 0;
}
