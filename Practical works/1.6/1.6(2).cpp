#include <iostream>

bool isMultipleOfEight(int A) {
    return (A & 7) == 0;
}

int main() {
    int A;
    std::cout << "Enter an integer A: ";
    std::cin >> A;

    if (isMultipleOfEight(A)) {
        std::cout << "A is a multiple of 8." << std::endl;
    } else {
        std::cout << "A is not a multiple of 8." << std::endl;
    }

    return 0;
}