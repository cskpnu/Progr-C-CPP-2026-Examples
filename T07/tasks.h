// Файл: tasks.h
#pragma once
#include <string>

// Оголошення структури з Банку 05
struct BOOK {
    std::string author;
    int year;
    int ratings[5];
    double averageRating;
};

// ==========================================
// ПРОТОТИПИ ФУНКЦІЙ ДЛЯ КОЖНОГО БАНКУ ЗАДАЧ
// ==========================================

// --- Банк 01 ---
// Повертаємо два результати через передачу за посиланням
void convertSpeed(double speed_mph, double& speed_kmh, double& speed_ms);

// --- Банк 02 ---
int getQuadrant(double x, double y);
double calculatePiecewise(double x);

// --- Банк 03 ---
// Передаємо масив як константу, оскільки ми його лише читаємо
int calculateSeedlings(const int k[], int n);

// --- Банк 04 ---
bool findCommas(const std::string& text, size_t& firstComma, size_t& lastComma);

// --- Банк 05 ---
void sortBooksByYear(BOOK catalog[], int size);

// --- Банк 06 ---
long long SeqA(int N);
