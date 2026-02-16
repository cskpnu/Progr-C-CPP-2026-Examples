// Lab-03-06.cpp
#include <iostream>

using namespace std;

int main() {
    int m[3][3] = {{1, 5, 2},
                   {9, 3, 4},
                   {6, 8, 7}};
    int maxVal = m[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i][j] > maxVal) {
                maxVal = m[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    cout << "Максимум: " << maxVal << " (рядок " << maxRow << ", стовпець " << maxCol << ")" << endl;
    return 0;
}
