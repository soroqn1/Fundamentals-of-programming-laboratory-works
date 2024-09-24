#include <iostream>
#include <vector>

int main() {
    int m;
    std::cout << "Введіть кількість послідовностей (m): ";
    std::cin >> m;
    std::vector<std::vector<int>> A(m);

    for (int i = 0; i < m; ++i) {
        A[i].resize(i + 1); // m = i + 1
        std::cout << "Введіть елементи послідовності " << i + 1 << ": ";
        for (int j = 0; j < i + 1; ++j) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Введені послідовності:" << std::endl;
    for (const auto& seq : A) {
        for (int val : seq) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}