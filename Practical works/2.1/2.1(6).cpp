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
        if (i < A[i].size()) {
            int val = A[i][A[i].size() - i - 1]; // Елемент побічної діагоналі
            if (val < minValue) {
                minValue = val;
                minIndexM = i;
                minIndexN = A[i].size() - i - 1;
            }
        }
    }

    std::cout << "Індекси мінімального значення побічної діагоналі: (" << minIndexM << ", " << minIndexN << ")" << std::endl;
    return 0;
}