#include <iostream>

int main() {
    // Перша частина: Логічний вираз з використанням різних чисел
    const double number0 = 76;
    const int number1 = 24;
    const double number2 = 8.2;
    const double number3 = 8.2;

    // Розрахункуємо результат логічного виразу.
    bool answer0 = !((number0 != number1) ^ (!(number2 == number3)));

    // Друга частина: Логічний вираз з використанням однакових чисел
    const double number4 = 44.9;
    const double number5 = 44.9;
    const int number6 = 31;
    const int number7 = 47;

    // Розрахункуємо результат логічного виразу
    bool answer1 = !((number4 != number5) ^ (!(number6 == number7)));

    // Виводимо результати на екран
    std::cout << "Результат першого виразу: " << std::boolalpha << answer0 << std::endl;
    std::cout << "Результат другого виразу: " << std::boolalpha << answer1 << std::endl;

    return 0;
}
