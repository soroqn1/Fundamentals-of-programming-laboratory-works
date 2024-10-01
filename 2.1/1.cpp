#include <iostream>

int main()
{
    {
        double numbers1[6];

        // инициалізація
        for (double i = 0, j = 1; i < 8 && j < 8; i = i + 2, j = j + 2) {
            numbers1[(int)i] = 1.5 - i;
            numbers1[(int)j] = 7.3 - i;
        }

        // сортировка масиву
        int lengthOfnumbers1 = sizeof(numbers1) / sizeof(*numbers1);
        for (int j = 0; j < lengthOfnumbers1 - 1; j++) {
            int iMax = j;
            for (int i = j + 1; i < lengthOfnumbers1; i++) {
                if (numbers1[i] > numbers1[iMax]) {
                    iMax = i;
                }
            }

            if (iMax != j) {
                std::swap(numbers1[j], numbers1[iMax]);
            }
        }

        // вивід масиву
        std::cout << "Масив по спаданню: ";
        for (int i = 0; i < 8; i++) {
            std::cout << numbers1[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}