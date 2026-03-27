#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

void fillArray(vector<int>& arr, int size) {
    arr.resize(size);
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 21 - 10;
    }
}

void coutArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

void sortAsc(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

void mergeDesc(const vector<int>& a, const vector<int>& b, vector<int>& result) {
    result = a;
    result.insert(result.end(), b.begin(), b.end());

    sort(result.begin(), result.end(), greater<int>());
}

int main() {
    srand(time(NULL));
    system("chcp 65001>null");

    int n, m;
    cout << "Розмір першого массиву: ";
    cin >> n;
    cout << "Розмір другого массиву: ";
    cin >> m;

    vector<int> arr1, arr2, result;

    fillArray(arr1, n);
    fillArray(arr2, m);

    sortAsc(arr1);
    sortAsc(arr2);

    cout << "Перший массив: ";
    coutArray(arr1);
    cout << "Другий массив: ";
    coutArray(arr2);

    mergeDesc(arr1, arr2, result);

    cout << "Обьеднанні массиви: ";
    coutArray(result);

    return 0;
}