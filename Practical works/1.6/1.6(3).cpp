#include <iostream>
#include <vector>

std::vector<int> AND(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = a[i] & b[i];
    }
    return result;
}

std::vector<int> OR(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = a[i] | b[i];
    }
    return result;
}

std::vector<int> XOR(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = a[i] ^ b[i];
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 0, 1, 0};
    std::vector<int> b = {0, 1, 1, 0};

    std::vector<int> andResult = AND(a, b);
    std::vector<int> orResult = OR(a, b);
    std::vector<int> xorResult = XOR(a, b);

    return 0;
}