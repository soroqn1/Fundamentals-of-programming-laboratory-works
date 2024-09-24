#include <iostream>
#include <vector>
#include <limits>

int main() {
    int m;
    std::cout << "Введіть кількість послідовностей: ";
    std::cin >> m;
    std::vector<std::vector<int>> A(m);

    for (int i = 0; i < m; ++i) {
        int n;
        std::cout << "Введіть кількість елементів у послідовності " << i + 1 << ": ";
        std::cin >> n;
        A[i].resize(n);
        std::cout << "Введіть елементи послідовності: ";
        for (int j = 0; j < n; ++j) {
            std::cin >> A[i][j];
        }
    }

    int minValue = std::numeric_limits<int>::max();
    int minIndexM = -1, minIndexN = -1;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < A[i].size(); ++j) {
            if (A[i][j] < minValue) {
                minValue = A[i][j];
                minIndexM = i;
                minIndexN = j;
            }
        }
    }

    std::cout << "Індекси розміщення мінімального значення: (" << minIndexM << ", " << minIndexN << ")" << std::endl;
    return 0;
}