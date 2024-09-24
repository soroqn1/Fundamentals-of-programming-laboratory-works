#include <iostream>
#include <limits>

using namespace std;

// 1. Знайти мінімальне значення у послідовності
int findMinValue(int A[], int n) {
    int minVal = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i] < minVal) {
            minVal = A[i];
        }
    }
    return minVal;
}

// 2. Знайти індекс найбільшого значення серед додатних елементів послідовності
int findMaxPositiveIndex(int A[], int n) {
    int maxIndex = -1;
    int maxVal = numeric_limits<int>::min();
    for (int i = 0; i < n; ++i) {
        if (A[i] > 0 && A[i] > maxVal) {
            maxVal = A[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

// 3. Знайти значення, яке є мінімальним у послідовності і більшим за P
int findMinGreaterThanP(int A[], int n, int P) {
    int minVal = numeric_limits<int>::max();
    for (int i = 0; i < n; ++i) {
        if (A[i] > P && A[i] < minVal) {
            minVal = A[i];
        }
    }
    return minVal == numeric_limits<int>::max() ? -1 : minVal;
}

// 4. Знайти індекс останнього входження P у послідовність
int findLastOccurrenceIndex(int A[], int n, int P) {
    int lastIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (A[i] == P) {
            lastIndex = i;
        }
    }
    return lastIndex;
}

// 5. Знайти кількість входжень P у послідовність
int countOccurrences(int A[], int n, int P) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] == P) {
            ++count;
        }
    }
    return count;
}

// Домашнє завдання 1: Знайти індекс першого входження P у послідовність
int findFirstOccurrenceIndex(int A[], int n, int P) {
    for (int i = 0; i < n; ++i) {
        if (A[i] == P) {
            return i;
        }
    }
    return -1;
}

// Домашнє завдання 2: Знайти найменше значення серед додатних елементів
int findMinPositiveValue(int A[], int n) {
    int minVal = numeric_limits<int>::max();
    for (int i = 0; i < n; ++i) {
        if (A[i] > 0 && A[i] < minVal) {
            minVal = A[i];
        }
    }
    return minVal == numeric_limits<int>::max() ? -1 : minVal;
}

// Домашнє завдання 3: Знайти найбільше і найменше значення та поміняти їх місцями
void swapMaxMin(int A[], int n) {
    if (n == 0) return;

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;
}

int main() {
    const int SIZE = 10;
    int A[SIZE] = {3, -1, 7, 4, 5, -2, 6, 8, -9, 2};
    int P = 4;

    cout << "Мінімальне значення: " << findMinValue(A, SIZE) << endl;
    cout << "Індекс найбільшого додатного значення: " << findMaxPositiveIndex(A, SIZE) << endl;
    cout << "Мінімальне значення більше " << P << ": " << findMinGreaterThanP(A, SIZE, P) << endl;
    cout << "Індекс останнього входження " << P << ": " << findLastOccurrenceIndex(A, SIZE, P) << endl;
    cout << "Кількість входжень " << P << ": " << countOccurrences(A, SIZE, P) << endl;

    // Домашнє завдання
    cout << "Індекс першого входження " << P << ": " << findFirstOccurrenceIndex(A, SIZE, P) << endl;
    cout << "Найменше додатне значення: " << findMinPositiveValue(A, SIZE) << endl;

    swapMaxMin(A, SIZE);
    cout << "Масив після обміну найбільшого і найменшого значення: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}