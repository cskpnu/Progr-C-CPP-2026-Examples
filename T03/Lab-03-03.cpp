// Lab-03-03.cpp
#include <iostream>

using namespace std;

int main() {
    double arr[] = {1.5, 2.3, 4.0, 4.1, 9.8};
    int n = 5;
    bool isGrowing = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            isGrowing = false;
            break;
        }
    }

    if (isGrowing) cout << "True (Послідовність зростає)" << endl;
    else cout << "False (Послідовність не зростає)" << endl;
    return 0;
}
