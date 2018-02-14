/*
anothe console application to demonstrate pointers consept in C
*/

#include <stdio.h>
#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    cout << "Pointers in C:" << '\n';
    // Объявить переменную вида int.
    int var = 120;

    // Объявить указатель (pointer) (указывающий на адрес вида int).
    int *ip;

    // Прикрепить значение к ip (указывающий на адрес переменной 'var').
    ip = &var;
    // Написать адрес переменной 'var'.
    printf("Address of var variable: %x \n", &var);

    // Написать сохраненный адрес в переменной 'ip'.
    printf("Address stored in ip variable: %x \n", ip);

    // Доступ к значению переменной, к которой указывает указатель.
    printf("Value of *ip variable: %d\n", *ip);

    // Использовать * чтобы получить доступ к значению переменной, к которой указывает указатель.
    // De-reference ?
    int var2 = *ip;

    // The question: if I assign the second pointer to a value and change the value later.
    // Will the first pointer reference the new value?
    printf(" var2 is : %d\n", *ip);

    fflush (stdout);

    // getch();
    return 0;
}
