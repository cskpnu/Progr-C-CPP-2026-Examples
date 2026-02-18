// Lab-03-07.cpp
#include <iostream>

using namespace std;

int main() {
    int matrix[2][3] = {{10, 20, 30},
                        {1,  2,  3}};

    for (int i = 0; i < 2; i++) { // Проходимо по рядках
        int rowSum = 0;
        for (int j = 0; j < 3; j++) { // Проходимо по стовпцях
            rowSum += matrix[i][j];
        }
        cout << "Сума рядка " << i << ": " << rowSum << endl;
    }

    return 0;
}
