// Файл: main.cpp
#include <iostream>
#include <string>
#include "tasks.h" // Наш каталог прототипів

// Прототипи локальних функцій меню
void runBank01();
void runBank02();
void runBank03();
void runBank04();
void runBank05();
void runBank06();

int main() {
    // Налаштування української мови для консолі Windows
    std::system("chcp 65001 > nul");
    int choice;

    do {
        std::cout << "\n====================================\n";
        std::cout << "     КАТАЛОГ ЛАБОРАТОРНИХ РОБІТ     \n";
        std::cout << "====================================\n";
        std::cout << "1. Банк 01 (Лінійні алгоритми)\n";
        std::cout << "2. Банк 02 (Розгалуження)\n";
        std::cout << "3. Банк 03 (Цикли та масиви)\n";
        std::cout << "4. Банк 04 (Рядки)\n";
        std::cout << "5. Банк 05 (Структури)\n";
        std::cout << "6. Банк 06 (Рекурсія)\n";
        std::cout << "0. Вихід\n";
        std::cout << "====================================\n";
        std::cout << "Оберіть банк задач: ";
        std::cin >> choice;

        switch (choice) {
            case 1: runBank01(); break;
            case 2: runBank02(); break;
            case 3: runBank03(); break;
            case 4: runBank04(); break;
            case 5: runBank05(); break;
            case 6: runBank06(); break;
            case 0: std::cout << "Роботу завершено. До побачення!\n"; break;
            default: std::cout << "Невірний вибір! Спробуйте ще раз.\n";
        }
    } while (choice != 0);

    return 0;
}

// ==========================================
// ЛОКАЛЬНІ ФУНКЦІЇ ІНТЕРФЕЙСУ ДЛЯ КОЖНОГО БАНКУ
// ==========================================

void runBank01() {
    std::cout << "\n--- Задача 01-02: Конвертація швидкості ---\n";
    double mph, kmh, ms;
    std::cout << "Введіть швидкість у милях/год: ";
    std::cin >> mph;

    convertSpeed(mph, kmh, ms); // Виклик логіки

    std::cout << "Швидкість: " << kmh << " км/год | " << ms << " м/с\n";
}

void runBank02() {
    int taskChoice;
    std::cout << "\n--- Банк 02 ---\n";
    std::cout << "1. Задача 02-01 (Квадрант координат)\n";
    std::cout << "6. Задача 02-06 (Кусочна функція)\n";
    std::cout << "Оберіть задачу: ";
    std::cin >> taskChoice;

    if (taskChoice == 1) {
        double x, y;
        std::cout << "Введіть координати x та y: ";
        std::cin >> x >> y;

        int quad = getQuadrant(x, y); // Виклик логіки
        if (quad == 0) std::cout << "Точка лежить на осях координат.\n";
        else std::cout << "Точка знаходиться у " << quad << "-му квадранті.\n";

    } else if (taskChoice == 6) {
        double x;
        std::cout << "Введіть x: ";
        std::cin >> x;

        // Виклик логіки
        std::cout << "Результат функції y = " << calculatePiecewise(x) << "\n";
    } else {
        std::cout << "Такої задачі немає.\n";
    }
}

void runBank03() {
    std::cout << "\n--- Задача 03-01: Саджанці оленів ---\n";
    // Дані можна було б вводити з клавіатури, але за умовою вашої лаби масив задано одразу
    int k[] = {5, 12, 3, 8, 1};
    int n = 5;

    int total = calculateSeedlings(k, n); // Виклик логіки
    std::cout << "Загальна кількість саджанців: " << total << "\n";
}

void runBank04() {
    std::cout << "\n--- Задача 04-01: Пошук ком у тексті ---\n";
    std::string text;
    std::cout << "Введіть текст з комами: ";
    std::cin.ignore(); // Очищення буфера після std::cin >> choice
    std::getline(std::cin, text);

    size_t first, last;
    if (findCommas(text, first, last)) { // Виклик логіки
        std::cout << "Порядковий номер першої коми: " << first + 1 << "\n";
        std::cout << "Порядковий номер останньої коми: " << last + 1 << "\n";
    } else {
        std::cout << "У тексті немає жодної коми.\n";
    }
}

void runBank05() {
    std::cout << "\n--- Задача 05-01: Сортування каталогу книг ---\n";
    const int SIZE = 3;
    // Створюємо тестовий масив структур
    BOOK catalog[SIZE] = {
            {"Шевченко Т.Г.", 1840, {5,5,5,4,5}, 4.8},
            {"Франко І.Я.", 1890, {4,5,4,4,5}, 4.4},
            {"Костенко Л.В.", 1980, {5,5,5,5,5}, 5.0}
    };

    sortBooksByYear(catalog, SIZE); // Виклик логіки сортування

    std::cout << "Каталог після сортування за роком видання:\n";
    for(int i = 0; i < SIZE; i++) {
        std::cout << catalog[i].year << " р. | " << catalog[i].author << " (Рейтинг: " << catalog[i].averageRating << ")\n";
    }
}

void runBank06() {
    std::cout << "\n--- Задача 06-03: Рекурсивна послідовність ---\n";
    int n;
    std::cout << "Введіть номер члена послідовності N (наприклад, 5): ";
    std::cin >> n;

    // Виклик логіки
    std::cout << n << "-й член послідовності: " << SeqA(n) << "\n";
}
