#include <iostream>

int main() {
    int number;
    std::cout << "Введіть ціле число: ";
    std::cin >> number;

    // Оператор вибору
    if (number % 2 == 0) {
        std::cout << number << " - парне число." << std::endl;
    } else {
        std::cout << number << " - непарне число." << std::endl;
    }

    // Обчислення факторіалу
    long long factorial = 1;
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    std::cout << "Факторіал числа " << number << " дорівнює " << factorial << std::endl;

    return 0;
}