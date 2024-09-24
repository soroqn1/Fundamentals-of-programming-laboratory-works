#include <iostream>
#include <vector>

std::vector<int> NOT(const std::vector<int>& a) {
    std::vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = !a[i];
    }
    return result;
}

std::vector<int> addBinary(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size());
    int carry = 0;

    for (int i = a.size() - 1; i >= 0; --i) {
        result[i] = (a[i] + b[i] + carry) % 2;
        carry = (a[i] + b[i] + carry) / 2;
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 0, 1, 0};
    std::vector<int> b = {0, 1, 1, 0};

    std::vector<int> notResult = NOT(a);
    std::vector<int> addResult = addBinary(a, b);

    return 0;
}