/*
the fifth console application to demonstrate 2d arrays
*/

#include <stdio.h>
#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    cout << "2D aArray in C example:" << '\n';

    // Объявить двумерный массив (3 строки, 5 столбцов)
    int a[3][5] = {
      { 1, 2, 3, 4, 5 },
      { 0, 3, 4, 5, 7 },
      { 0, 3, 4, 0, 0 }
    };

    // Использовать цикл for чтобы распечатать элементы массива.
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 5; col++) {
            printf("Element at [%d,%d] = %d \n", row, col, a[row][col]);
        }
    }

    fflush (stdout);

    // getch();
    return 0;
}
