/*
* Linear search
*/

#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue)
{
    for (int i=0; i<size; i++)
    {
        if (searchValue == array[i])
        {
            printf("i = %d = %d \n", i, array[i]);
            return i;
        }

     }

}

int main()
{
    cout << "Linear search in C examples:" << '\n';

    int a[] = {15, 23, 7, 45, 97, 16};
    int userValue;
    cout << "Enter an integer: " << endl;
    cin >> userValue;
    int result = linearSearch(a, 6, userValue);

    if (result >= 0)
    {
        cout << "The number " << a[result] << " was found" << endl;
    }
    else
    {
        cout << "The number " << userValue << " was not found. " << endl;
    }


    //getch();
    return 0;
}
