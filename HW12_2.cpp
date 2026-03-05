#include <iostream>
using namespace std;

int main()
{
    const int size = 6;

    int arr1[size] = {15, 64, 35, 98, 44, 76};

    int* start = arr1;
    int* end = arr1 + size - 1;

    cout << "First array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Second array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}