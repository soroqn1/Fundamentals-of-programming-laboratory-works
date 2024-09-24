#include <iostream>

double global_a = 2.3;
static int global_b = 4;
static int global_c = 17;

int main()
{
    double a = 42;
    int b1 = 90;

    {
        int c1 = 71;
        double sumLocal = a + c1;
        double sumGlobal = ::global_a + c1;
    }

    {
        static int a2 = 50;

        {
            int a3 = a + a2;

            int* pD = new int;
            *pD = 22;

            int* pF = new int;
            *pF = 100;

            int* pG = new int(8);

            delete pD;
            delete pF;
            delete pG;
        }
    }

    float a4 = 3.17;
    {
        a4 = a4 + 1;

        {
            float a4 = 6543;
            a4 = a4 - 1;
        }

        a4++;
    }

    for (int i = 0; i < 100; i++) {
        int forA = 0;
        int forB = 0;
        forA++;
        forB++;
    }

    char* pTrash = new char;
    *pTrash = '=';

    char* pTrash1 = new char(127);

    delete pTrash;
    delete pTrash1;

    return 0;
}