#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <string>

// Допоміжна функція для виведення поточних залишків на екран.
// Передаємо словник за константним посиланням, щоб не копіювати його в пам'яті.
void printInventory(const std::map<std::string, int> &inventory) {
    std::cout << "\n=== ПОТОЧНІ ЗАЛИШКИ НА СКЛАДІ ===\n";
    if (inventory.empty()) {
        std::cout << "Склад порожній.\n";
        return;
    }

    // Перебір словника (дані виводяться автоматично відсортованими за артикулом)
    for (const auto &pair: inventory) {
        std::cout << "Артикул: " << pair.first << " | Кількість: " << pair.second << " од.\n";
    }
}

// Допоміжна функція для виведення журналу операцій
void printLog(const std::vector<std::string> &actionLog) {
    std::cout << "\n=== ЖУРНАЛ ОПЕРАЦІЙ ===\n";
    for (size_t i = 0; i < actionLog.size(); ++i) {
        std::cout << i + 1 << ". " << actionLog[i] << "\n";
    }
}

int main() {
    // 1. Оголошуємо наші контейнери
    std::map<std::string, int> inventory;
    std::vector<std::string> actionLog;
    std::stack<std::string> undoStack;

    std::cout << "--- Початок зміни ---\n";

    // 2. ІМІТАЦІЯ РОБОТИ: Надходження першого товару
    std::string item1 = "LAPTOP-X1";
    int qty1 = 50;

    inventory[item1] += qty1;                                 // Оновлюємо кількість у словнику
    undoStack.push(item1);                                    // Кладемо артикул у стек для можливого скасування
    actionLog.push_back("Отримано 50 од. товару LAPTOP-X1");  // Записуємо в лог

    std::cout << "Товар [" << item1 << "] успішно додано.\n";

    // Надходження другого товару
    std::string item2 = "KEYBOARD-RGB";
    int qty2 = 150;

    inventory[item2] += qty2;
    undoStack.push(item2);
    actionLog.push_back("Отримано 150 од. товару KEYBOARD-RGB");

    std::cout << "Товар [" << item2 << "] успішно додано.\n";

    // Виводимо проміжний результат
    printInventory(inventory);

    // 3. ІМІТАЦІЯ ПОМИЛКИ: Оператор вирішує скасувати останню дію (Undo)
    std::cout << "\n--- Виявлено помилку! Скасовуємо останню дію... ---\n";

    // Перевіряємо, чи є взагалі що скасовувати
    if (!undoStack.empty()) {
        // Дізнаємося, який артикул був доданий останнім
        std::string lastArticle = undoStack.top();
        undoStack.pop(); // Видаляємо його зі стека

        // Видаляємо цей товар зі словника залишків
        inventory.erase(lastArticle);

        // Записуємо дію скасування в лог
        actionLog.push_back("СКАСОВАНО надходження товару [" + lastArticle + "]");

        std::cout << "Операцію скасовано. Товар [" << lastArticle << "] вилучено зі складу.\n";
    }

    // 4. Фінальний звіт
    printInventory(inventory);
    printLog(actionLog);

    std::cout << "\n--- Кінець зміни ---\n";
    return 0;
}
