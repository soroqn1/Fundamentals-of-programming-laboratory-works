#include <iostream>

void printTree(int columns) {
    int height = columns / 2 + 1;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (j >= height - 1 - i && j <= height - 1 + i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl; 
    }

    for (int i = 0; i < height / 3; ++i) { 
        for (int j = 0; j < columns; ++j) {
            if (j == height - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int maxColumns;
    std::cout << "Введіть максимальну кількість стовбців: ";
    std::cin >> maxColumns;

    if (maxColumns % 2 == 0) {
        std::cout << "Максимальна кількість стовбців повинна бути непарною." << std::endl;
    } else {
        for (int columns = 3; columns <= maxColumns; columns += 2) {
            std::cout << "Ялинка з " << columns << " стовбцями:" << std::endl;
            printTree(columns);
            std::cout << std::endl;
        }
    }

    return 0;
}