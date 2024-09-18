#include <iostream>
#include <cmath> // Для функції cos()

using namespace std;

// 1. Знаходимо суму чисел від 1 до 5
int sumFrom1To5() {
    int sum = 0;
    for (int i = 1; i <= 5; ++i) {
        sum += i;
    }
    return sum;
}

// 2. Факторіал числа N (заздалегідь визначаємо N)
int factorial(int N) {
    int result = 1;
    for (int i = 1; i <= N; ++i) {
        result *= i;
    }
    return result;
}

// 3. Сума всіх парних чисел на проміжку від 0 до N (заздалегідь визначаємо N)
int sumOfEvenNumbers(int N) {
    int sum = 0;
    for (int i = 0; i <= N; i += 2) {
        sum += i;
    }
    return sum;
}

// 4. Добуток перших n елементів арифметичної прогресії (a1, d, n заздалегідь визначені)
int productOfArithmeticProgression(int a1, int d, int n) {
    int product = 1;
    for (int i = 0; i < n; ++i) {
        product *= a1 + i * d;
    }
    return product;
}

// 5. Табулювання функції F(x) = cos(x) на проміжку від 0 до π з кроком h = 0.01
void tabulateFunction(double h) {
    for (double x = 0; x <= M_PI; x += h) {
        double result = cos(x);
        cout << "F(" << x << ") = " << result << endl;
    }
}

int main() {
    // Виклик завдань
    cout << "1. Сума чисел від 1 до 5: " << sumFrom1To5() << endl;

    // Заздалегідь визначаємо значення для факторіалу
    int N = 5;
    cout << "2. Факторіал числа " << N << ": " << factorial(N) << endl;

    // Заздалегідь визначаємо значення для суми парних чисел
    N = 10;
    cout << "3. Сума всіх парних чисел від 0 до " << N << ": " << sumOfEvenNumbers(N) << endl;

    // Заздалегідь визначаємо значення для арифметичної прогресії
    int a1 = 2, d = 3, n = 4;
    cout << "4. Добуток перших " << n << " елементів арифметичної прогресії: " << productOfArithmeticProgression(a1, d, n) << endl;

    // Табулювання функції F(x) = cos(x) на проміжку від 0 до π з кроком h = 0.01
    cout << "5. Табулювання функції F(x) = cos(x) на проміжку від 0 до π з кроком h = 0.01:\n";
    tabulateFunction(0.01);

    return 0;
}