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

    int maxNegative = std::numeric_limits<int>::min();
    bool foundNegative = false;

    for (const auto& seq : A) {
        for (int val : seq) {
            if (val < 0) {
                foundNegative = true;
                maxNegative = std::max(maxNegative, val);
            }
        }
    }

    if (foundNegative) {
        std::cout << "Максимальне від’ємне значення: " << maxNegative << std::endl;
    } else {
        std::cout << "Від’ємні значення не знайдені." << std::endl;
    }
    return 0;
}