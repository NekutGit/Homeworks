#include <iostream>
using namespace std;

int binarSearch(int* arr, int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main() {
    system("chcp 65001>null");

    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;

    int key;
    cout << "Введіть ключ: ";
    cin >> key;

    int pos = binarSearch(arr, size, key);

    if (pos != -1)
        cout << "Знайдено ключ на позиції " << pos + 1;
    else
        cout << "Не знайдено";

    return 0;
}