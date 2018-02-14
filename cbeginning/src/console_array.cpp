/*
the forth (third was reserved for the control structures)
console application to demonstrate some data properties
*/

#include <stdio.h>
#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    cout << "Arrays in C examples:" << '\n';

    // Способ 1:
    // Объявить массив чисел int, определяющий элементы.
    int years[] = { 2001, 2003, 2005, 1980, 2003 };
    // Написать количество нужных байтов для хранения вида int.
    printf("Sizeof(int) = %d \n", sizeof(int));
    // Количество байтов нужных для хранения данного массива.
    printf("Sizeof(years) = %d \n", sizeof(years));
    int arrayLength = sizeof(years) / sizeof(int);
    printf("Element count of array years = %d \n", arrayLength);

    // Использовать цикл for чтобы распечатать элементы массива.
    for (int i = 0; i < arrayLength; i++) {
        printf("Element at %d = %d \n", i, years[i]);
    }

    fflush (stdout);
    // Способ 2:
    // Объявить массив с 5 элементами,
    // определяющий значение 3 первым элементам.
    int age[5] = { 20, 10, 50 };

    // Способ 3:
    // Объявить массив чисел float, определяющий количество элементов.
    // (Размер 3).
    float salaries[3];
    // Прикрепить значения элементам.
    salaries[0] = 1000;
    salaries[1] = 1200;
    salaries[2] = 1100;

    // getch();
    return 0;
}
