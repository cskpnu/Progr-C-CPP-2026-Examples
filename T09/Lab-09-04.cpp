#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream inFile("matrix.dat", std::ios::in | std::ios::binary);
    std::ofstream outFile("diagonal.dat", std::ios::out | std::ios::binary);

    if (!inFile.is_open() || !outFile.is_open()) {
        std::cerr << "Помилка відкриття файлів матриці!\n";
        return 1;
    }

    int N;
    // Зчитуємо розмірність матриці (перші 4 байти)
    if (inFile.read(reinterpret_cast<char*>(&N), sizeof(int))) {

        std::cout << "Розмір матриці: " << N << "x" << N << "\n";

        // Створюємо одновимірний масив для зберігання всієї матриці
        std::vector<int> matrix(N * N);

        // Зчитуємо ВСЮ матрицю одним махом (це значно швидше, ніж читати по одному числу)
        inFile.read(reinterpret_cast<char*>(matrix.data()), N * N * sizeof(int));

        std::cout << "Елементи головної діагоналі: ";

        // Головна діагональ - це елементи, де номер рядка дорівнює номеру стовпця (i == j).
        // В одновимірному масиві їхній індекс обчислюється як: (i * N) + i
        for (int i = 0; i < N; ++i) {
            int diagElement = matrix[i * N + i];

            std::cout << diagElement << " ";

            // Записуємо знайдений елемент у новий бінарний файл
            outFile.write(reinterpret_cast<char*>(&diagElement), sizeof(int));
        }
        std::cout << "\nДіагональ успішно збережена у файл diagonal.dat\n";

    } else {
        std::cout << "Файл matrix.dat порожній або пошкоджений.\n";
    }

    return 0;
}
