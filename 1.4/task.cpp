#include <iostream>

int main() {
    unsigned short a;
    int b;
    float c;
    double d;

    // Pointers to variables.
    unsigned short* a1 = &a;
    int* b1 = &b;
    float* c1 = &c;
    double* d1 = &d;

// Universal pointers.
    void* f = &a1;
    void* k = &b1;
    void* l = &c1;
    void* s = &d1;

    // Assigning new values through pointers
    *a1 = 43;
    *b1 = 5124;
    *c1 = -8976.04f;  // 'f' suffix for float type
    *d1 = 3.5e-4;

    // Output sizes of various data types
    std::cout << "Size of a: " << sizeof(a) << " bytes\n";
    std::cout << "Size of b: " << sizeof(b) << " bytes\n";
    std::cout << "Size of c: " << sizeof(c) << " bytes\n";
    std::cout << "Size of d: " << sizeof(d) << " bytes\n";
    std::cout << "Size of a1 (pointer): " << sizeof(a1) << " bytes\n";
    std::cout << "Size of b1 (pointer): " << sizeof(b1) << " bytes\n";
    std::cout << "Size of c1 (pointer): " << sizeof(c1) << " bytes\n";
    std::cout << "Size of d1 (pointer): " << sizeof(d1) << " bytes\n";

    // References to variables
    int& sb = b;
    unsigned short& sa = a;
    float& sc = c;
    double& sd = d;

    // Output values through references
    std::cout << "Value of a through reference: " << sa << "\n";
    std::cout << "Value of b through reference: " << sb << "\n";
    std::cout << "Value of c through reference: " << sc << "\n";
    std::cout << "Value of d through reference: " << sd << "\n";

    return 0;
}