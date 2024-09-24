#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int m;
    std::cout << "Введіть кількість послідовностей: ";
    std::cin >> m;
    std::vector<std::vector<int>> A(m);

    for (int i = 0; i < m; ++i) {
        int n;
        std::cout << "Введіть кількість елементів у послідовності: " << i + 1 << ": ";
        std::cin >> n;
        A[i].resize(n);
        std::cout << "Введіть елементи послідовності: ";
        for (int j = 0; j < n; ++j) {
            std::cin >> A[i][j];
        }
    }

    int maxAbs = 0;
    for (const auto& seq : A) {
        for (int val : seq) {
            maxAbs = std::max(maxAbs, std::abs(val));
        }
    }

    std::cout << "Максимальне значення за абсолютною величиною: " << maxAbs << std::endl;
    return 0;
}