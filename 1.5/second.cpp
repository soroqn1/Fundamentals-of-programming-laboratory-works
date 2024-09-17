#include <iostream>

int main() {
    long a2 = 74;
    long b2 = 50;
    long c2 = 49;

    double d2 = 128.3;
    double* d3 = &d2;

    bool result = ((a2 & ~b2) + *d3) <= (c2 % (17194 << sizeof(float)));
    
}