#include <iostream>

int add(int A, int B) {
    while (B != 0) {
        int carry = A & B;
        A = A ^ B;
        B = carry << 1;
    }
    return A;
}

int main() {
    int A, B;
    std::cout << "Enter two integers A and B: ";
    std::cin >> A >> B;

    std::cout << "Sum: " << add(A, B) << std::endl;
    return 0;
}