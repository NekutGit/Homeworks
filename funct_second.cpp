#include <iostream>
#include <ctime>

using namespace std;

void sort(int* arr, int size) {
    int left = -1, right = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (left == -1) left = i;
            right = i;
        }
    }

    if (left == -1 || left == right) return;

    for (int i = left + 1; i < right; i++) {
        for (int j = left + 1; j < right - (i - left - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int arr[10];
    int size = 10;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}