#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Введіть текст з комами: ";
    std::getline(std::cin, text);

    // Шукаємо першу кому зліва
    size_t firstComma = text.find(',');
    // Шукаємо першу кому справа (тобто останню в тексті)
    size_t lastComma = text.rfind(',');

    // Перевіряємо, чи взагалі знайшлась кома (хоча за умовою вона є)
    if (firstComma != std::string::npos) {
        std::cout << "Порядковий номер першої коми: " << firstComma + 1 << std::endl;
        std::cout << "Порядковий номер останньої коми: " << lastComma + 1 << std::endl;
    } else {
        std::cout << "У тексті немає жодної коми." << std::endl;
    }

    return 0;
}
