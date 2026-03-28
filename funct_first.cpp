#include <iostream>
using namespace std;

void sort(int* arr, int size) {
    int mid = size / 2;

    for (int i = 1; i < mid; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = mid + 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= mid && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7, 3};
    int size = 6;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}