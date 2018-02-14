/*
the second console application to demonstrate some data properties
*/

#include <stdio.h>
#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    cout << "Function sizeof(type)" << '\n';
    // Функция sizeof(type)
    // возвращает количество байтов необходимых для хранения этого вида данных.
    printf("Storage size for float : %d bytes\n", sizeof(float));

    // FLT_MIN является константой, самое малое значение вида float.
    // Данная константа будет определена в библиотеке float.h
    printf("Minimum float positive value: %E\n", FLT_MIN);

    // FLT_MAX является константой, самое большое значение вида данных float.
    // Данная константа будет определена в библиотеке float.h
    printf("Maximum float positive value: %E\n", FLT_MAX);

    // FLT_DIG является константой, максимальное количество позиций дробной части.
    // Данная константа будет определена в библиотеке float.h
    printf("Precision value: %d\n", FLT_DIG);
    // getch();
    return 0;
}
