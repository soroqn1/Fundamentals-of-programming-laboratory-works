#include <iostream>
#include <limits>

int main() {
    double a[10], b[10], c[10];

    // Инициализация массивов a и b
    for (int i = 0; i < 10; i++) {
        a[i] = i + 58;
        b[i] = 63 - i;
    }

    // Поиск общих элементов в массивах a и b
    int k = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (a[i] == b[j]) {
                c[k] = a[i];
                k++;
                break;  // Прерываем внутренний цикл, если нашли совпадение
            }
        }
    }

    // Проверка, есть ли общие элементы
    if (k == 0) {
        std::cout << "Общих элементов нет." << std::endl;
        return 0;
    }

    // Поиск минимального значения
    double min = c[0];
    for (int i = 1; i < k; i++) {
        if (c[i] < min) {
            min = c[i];
        }
    }

    std::cout << "Min: " << min << std::endl;

    return 0;
}