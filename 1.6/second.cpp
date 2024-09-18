#include <iostream>

int main() {
    // ЧАСТИНА ДРУГА

    int one1;                          // Опис змінних типів: int
    float two1;                        // float
    unsigned short three1;             // unsigned short

    one1 = 5876;                      // Ініціалізаці змінних: int
    two1 = 21.09;                    // float
    three1 = 333;                     // unsigned short

    double one2;                       // Опис змінних типів: double
    int two2;                          // int
    char three2;                       // char
    
    one2 = one1;                       // Неявне приведення типів int в double
    two2 = static_cast<int>(two1);     // Явне приведення типів float в int
    char* pThree2;                     // char pointer
    pThree2 = &three2;                 // Взяття адреси з three2
    *pThree2 = static_cast<char>(three1); // Неявне приведення типу unsigned short в char/

    return 0;
}