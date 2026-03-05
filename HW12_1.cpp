#include <iostream>
using namespace std;

int main()
{
    const int size = 6;

    int arr1[size] = {15, 64, 35, 98, 44, 76};
    int arr2[size];

    int* p1 = arr1;
    int* p2 = arr2;

    cout << "First array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        *(p2 + i) = *(p1 + i);
    }

    cout << "Second array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}