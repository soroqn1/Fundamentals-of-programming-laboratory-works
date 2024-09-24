#include <iostream>

bool areEqual(int A, int B) {
    return (A ^ B) == 0; //Якщо A XOR B = 0, то A = B
}

int main() {
    int A, B;
    std::cout << "Enter two integers A and B: ";
    std::cin >> A >> B;

    if (areEqual(A, B)) {
        std::cout << "A is equal to B." << std::endl;
    } else {
        std::cout << "A is not equal to B." << std::endl;
    }

    return 0;
}