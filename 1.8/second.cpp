#include <iostream>

int main() {
    int operand1 = -92;
    int operand2 = 16;

    std::cout << "Початкове значення: " << operand1 << std::endl;
    operand1--;  // Зменшення на 1
    std::cout << "Зменшене значення: " << operand1 << std::endl; 

    if (operand1 == -93) {
        std::cout << "Зменшення на 1 виконано правильно." << std::endl;
    }

    // Операція відношення <
    int operand3 = 54;
    int operand4 = 40;
    int sum = operand3 + operand4;

    std::cout << "Сума " << operand3 << " і " << operand4 << " дорівнює " << sum << std::endl; // 54 + 40 = 94

    if (sum < 129) {
        std::cout << sum << " менше ніж 129." << std::endl;
    } else {
        std::cout << sum << " не менше ніж 129." << std::endl;
    }

    return 0;
}