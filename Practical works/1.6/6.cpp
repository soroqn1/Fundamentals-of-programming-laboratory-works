#include <iostream>
#include <vector>

std::vector<int> leftShift(const std::vector<int>& a) {
    std::vector<int> result(a.size());
    for (size_t i = 0; i < a.size() - 1; ++i) {
        result[i] = a[i + 1];
    }
    result[a.size() - 1] = 0;
    return result;
}

std::vector<int> rightShift(const std::vector<int>& a) {
    std::vector<int> result(a.size());
    for (size_t i = a.size() - 1; i > 0; --i) {
        result[i] = a[i - 1];
    }
    result[0] = 0;
    return result;
}

int main() {
    std::vector<int> a = {1, 0, 1, 0};

    std::vector<int> leftShifted = leftShift(a);
    std::vector<int> rightShifted = rightShift(a);

    return 0;
}