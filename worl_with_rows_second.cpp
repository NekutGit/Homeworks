#include <iostream>
using namespace std;

template <typename T>
T max1(T* arr, int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

template <typename T>
T max2(T** arr, int rows, int cols) {
    T max = arr[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] > max)
                max = arr[i][j];

    return max;
}

int main() {
    system("chcp 65001>null");

    int arr1[5] = {1, 7, 3, 9, 2};

    int rows = 2, cols = 3;
    int** arr2 = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr2[i] = new int[cols]{1 + i, 5 + i, 3 + i};
    }

    cout << "Одновимірний: " << max1(arr1, 5) << endl;
    cout << "Двовимірний: " << max2(arr2, rows, cols) << endl;

    for (int i = 0; i < rows; i++)
        delete[] arr2[i];
    delete[] arr2;

    return 0;
}