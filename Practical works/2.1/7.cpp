#include <iostream>
#include <vector>

int main() {
    int m, R;
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

    std::cout << "Введіть число R: ";
    std::cin >> R;

    int lastIndexM = -1, lastIndexN = -1;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < A[i].size(); ++j) {
            if (A[i][j] == R) {
                lastIndexM = i;
                lastIndexN = j;
            }
        }
    }

    if (lastIndexM != -1) {
        std::cout << "Індекси останнього входження R: (" << lastIndexM << ", " << lastIndexN << ")" << std::endl;
    } else {
        std::cout << "R не знайдено в множині." << std::endl;
    }
    return 0;
}