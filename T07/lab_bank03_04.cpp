#include "tasks.h"
#include <string>

// Сума елементів масиву (Банк 03)
int calculateSeedlings(const int k[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += k[i];
    }
    return sum;
}

// Робота з рядками (Банк 04)
bool findCommas(const std::string& text, size_t& firstComma, size_t& lastComma) {
    firstComma = text.find(',');
    lastComma = text.rfind(',');
    return firstComma != std::string::npos; // Повертає true, якщо кому знайдено
}
