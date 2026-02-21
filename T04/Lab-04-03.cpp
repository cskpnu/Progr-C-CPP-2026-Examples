#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Введіть текст з крапками: ";
    std::getline(std::cin, text);

    size_t pos = text.find('.');

    // Поки метод find знаходить крапку (результат не дорівнює npos)
    while (pos != std::string::npos) {
        // Замінюємо 1 символ починаючи з позиції pos на рядок "!"
        text.replace(pos, 1, "!");

        // Шукаємо наступну крапку, починаючи з поточної позиції + 1
        // Це важливо, щоб програма не зациклилась!
        pos = text.find('.', pos + 1);
    }

    std::cout << "Змінений текст: " << text << std::endl;

    return 0;
}
