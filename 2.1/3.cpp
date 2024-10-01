#include <iostream>
using namespace std;

int main() {

    double a[5][4] = {
        {-23.2, 5.32, 43.2, -12.56},
        {125.3, -87.4, -654.6, -28.5},
        {12.4, 9.4, -34.3, -534.3},
        {-12.5, -465.5, 90.4, -342.62}
    };

    double b[5][5] = {
        {1.0, 3.0, 3.0, -4.0, 5.0},
        {76.0, -98.0, 73.0, 1.0, 7.0},
        {-413.0, 34.0, 67.0, -9876.0, 9.0},
        {1234.0, -23124.0, 76.0, 87.0, 11.0},
        {69.0, 96.0, 6969.0, 9696.0, 13.0}
    };

    double firstArray[5] = {1, 1, 1, 1, 1};
    double secondArray[5]; 
    
    int secondArrayCount = 0;

    // Обчислення для першого масиву
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (a[i][j] < 0) {
                firstArray[i] *= a[i][j];
            }
        }
    }

    // Обчислення для другого масиву
    for (int i = 0; i < 5; ++i) {
        if (b[i][i] > 0) {
            secondArray[secondArrayCount++] = b[i][i];
        }
    }

    cout << "Перший масив:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << firstArray[i] << " ";
    }
    cout << endl;

    cout << "Другий масив:" << endl;
    for (int i = 0; i < secondArrayCount; ++i) {
        cout << secondArray[i] << " ";
    }
    cout << endl;

    return 0;
}