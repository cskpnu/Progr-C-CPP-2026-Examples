#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Введіть текст: ";
    std::getline(std::cin, text);

    std::string reversedText = "";

    // Цикл йде від останнього індексу (length - 1) до 0 включно
    for (int i = text.length() - 1; i >= 0; --i) {
        reversedText += text[i]; // Додаємо символи по одному в новий рядок
    }

    std::cout << "Обернений текст: " << reversedText << std::endl;

    return 0;
}
