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

    int minPositive = std::numeric_limits<int>::max();
    bool foundPositive = false;

    for (const auto& seq : A) {
        for (int val : seq) {
            if (val > 0) {
                foundPositive = true;
                minPositive = std::min(minPositive, val);
            }
        }
    }

    if (foundPositive) {
        std::cout << "Мінімальне додатне значення: " << minPositive << std::endl;
    } else {
        std::cout << "Додатні значення не знайдені." << std::endl;
    }
    return 0;
}