/*
anothe console application to demonstrate NULL for pointers in C
*/

#include <stdio.h>
#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    cout << "NULL constant and it usage for Pointers in C:" << '\n';
    // Объявить указатель (Pointer).
    // Не прикреплять никакого значения данному указателю.
    // (Он указывает на случайный регион памяти).
    int *pointer1;

    // Распечатать адрес pointer1
    printf("Address of pointer1 is %x \n", pointer1);

    // Проверить pointer1 является не NULL.
    if (pointer1) {
        // Распечатать значение региона, куда указывает pointer1.
        // FORTRAN would output some random values (guess)
        printf("Value of *pointer1 is %d \n", *pointer1);
    }

    // Объявить переменную указателя (Pointer).
    // Указать к позиции NULL (Указать никуда).
    int *pointer2 = NULL;

    // Написать адрес pointer2.
    printf("Address of pointer2 is %x \n", pointer2);

    // Если pointer2 является NULL написать оповещение.
    if (!pointer2) {
        printf("pointer2 is NULL");
    } else {
        // ПРИМЕЧАНИЕ:
        // Если pointer2 NULL получение доступа к значению *pointer2
        // будет ошибкой и остановит программу.
        printf("Value of *pointer2 is %d \n", *pointer2);
    }

    fflush (stdout);

    // getch();
    return 0;
}
