#include "tasks.h"

// Сортування масиву структур (Банк 05)
void sortBooksByYear(BOOK catalog[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (catalog[j].year > catalog[j + 1].year) {
                BOOK temp = catalog[j];
                catalog[j] = catalog[j + 1];
                catalog[j + 1] = temp;
            }
        }
    }
}

// Рекурсія (Банк 06)
long long SeqA(int N) {
    if (N == 1) return 2;
    if (N == 2) return 3;
    return 2 * SeqA(N - 1) + SeqA(N - 2);
}
