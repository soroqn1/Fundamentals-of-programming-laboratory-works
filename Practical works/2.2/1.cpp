#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// 1
void replaceInBWithAverage(std::vector<int>& A, std::vector<int>& B) {
    double average = static_cast<double>(std::accumulate(A.begin(), A.end(), 0)) / A.size();
    for (auto& b : B) {
        if (std::find(A.begin(), A.end(), b) != A.end()) {
            b = static_cast<int>(average);
        }
    }
}

// 2
void replaceMinWithSum(std::vector<std::vector<int>>& A) {
    for (auto& sequence : A) {
        int sum = std::accumulate(sequence.begin(), sequence.end(), 0);
        int minValue = *std::min_element(sequence.begin(), sequence.end());
        std::replace(sequence.begin(), sequence.end(), minValue, sum);
    }
}

// 3
void replaceInAWithProduct(std::vector<int>& A, const std::vector<int>& B) {
    int product = std::accumulate(B.begin(), B.end(), 1, std::multiplies<int>());
    for (auto& a : A) {
        if (std::find(B.begin(), B.end(), a) != B.end()) {
            a = product;
        }
    }
}

// 4
void replaceMaxInColumnsWithProduct(std::vector<std::vector<int>>& A) {
    size_t m = A.size();
    for (size_t col = 0; col < m; ++col) {
        int product = 1;
        for (size_t row = 0; row < m; ++row) {
            product *= A[row][col];
        }
        int maxValue = A[0][col];
        for (size_t row = 1; row < m; ++row) {
            maxValue = std::max(maxValue, A[row][col]);
        }
        for (size_t row = 0; row < m; ++row) {
            if (A[row][col] == maxValue) {
                A[row][col] = product;
            }
        }
    }
}

// 5
void replaceNegativesInAWithMaxInB(std::vector<int>& A, const std::vector<int>& B) {
    int maxB = *std::max_element(B.begin(), B.end());
    for (auto& a : A) {
        if (a < 0) {
            a = maxB;
        }
    }
}

// 6
void replaceNegativesWithSumOfPositives(std::vector<std::vector<int>>& A) {
    for (auto& sequence : A) {
        int sumPos = std::accumulate(sequence.begin(), sequence.end(), 0,
                                      [](int acc, int x) { return x > 0 ? acc + x : acc; });
        for (auto& value : sequence) {
            if (value < 0) {
                value = sumPos;
            }
        }
    }
}

// 7
void replacePositivesInBWithMinInA(std::vector<int>& A, std::vector<int>& B) {
    int minA = *std::min_element(A.begin(), A.end());
    for (auto& b : B) {
        if (b > 0) {
            b = minA;
        }
    }
}

int main() {
    // Приклад використання функцій 

    // 1
    std::vector<int> A1 = {1, 2, 3};
    std::vector<int> B1 = {2, 3, 4, 1};
    replaceInBWithAverage(A1, B1);
    for (auto b : B1) std::cout << b << " "; // Вивід: 2 2 4 2
    std::cout << std::endl;

    // 2
    std::vector<std::vector<int>> A2 = {{1, 2, 3}, {4, 5, 1}};
    replaceMinWithSum(A2);
    for (const auto& seq : A2) {
        for (auto v : seq) std::cout << v << " "; // Вивід: 6 2 3 10 5 10
        std::cout << std::endl;
    }

    // 3
    std::vector<int> A3 = {1, 2, 3};
    std::vector<int> B3 = {2, 3};
    replaceInAWithProduct(A3, B3);
    for (auto a : A3) std::cout << a << " "; // Вивід: 1 6 3
    std::cout << std::endl;

    // 4
    std::vector<std::vector<int>> A4 = {{1, 2}, {3, 4}};
    replaceMaxInColumnsWithProduct(A4);
    for (const auto& seq : A4) {
        for (auto v : seq) std::cout << v << " "; // Вивід: 3 8
        std::cout << std::endl;
    }

    // 5
    std::vector<int> A5 = {-1, -2, 3};
    std::vector<int> B5 = {1, 2, 3};
    replaceNegativesInAWithMaxInB(A5, B5);
    for (auto a : A5) std::cout << a << " "; // Вивід: 3 3 3
    std::cout << std::endl;

    // 6
    std::vector<std::vector<int>> A6 = {{1, -2, 3}, {4, -5, -6}};
    replaceNegativesWithSumOfPositives(A6);
    for (const auto& seq : A6) {
        for (auto v : seq) std::cout << v << " "; // Вивід: 1 4 3 4 4 4
        std::cout << std::endl;
    }

    // 7
    std::vector<int> A7 = {1, 2, 3};
    std::vector<int> B7 = {1, -2, 3, 4};
    replacePositivesInBWithMinInA(A7, B7);
    for (auto b : B7) std::cout << b << " "; // Вивід: 1 1 1 1
    std::cout << std::endl;

    return 0;
}