#include <iostream>

using namespace std;

void create2D(int**& arr, int rows, int cols) {
    arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
}

void fill2D(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = i + j;
}

void to1D(int** arr2D, int rows, int cols, int*& arr1D) {
    arr1D = new int[rows * cols];

    int k = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr1D[k++] = arr2D[i][j];
}

void cout1D(int* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {
    int rows = 3, cols = 3;

    int** arr2D;
    int* arr1D;

    create2D(arr2D, rows, cols);

    fill2D(arr2D, rows, cols);

    to1D(arr2D, rows, cols, arr1D);

    cout1D(arr1D, rows * cols);

    for (int i = 0; i < rows; i++)
        delete[] arr2D[i];
    delete[] arr2D;
    delete[] arr1D;

    return 0;
}