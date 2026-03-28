#include <iostream>
using namespace std;

void printReverse(int a, int b) {
    if (a > b) {
        cout << a << " ";
        printReverse(a - 1, b);
    }
    else if (b > a) {
        cout << b << " ";
        printReverse(a, b - 1);
    }
}

int main() {
    system("chcp 65001>null");

    int a, b;
    cout << "Введіть діапазон з двох чисел: ";
    cin >> a >> b;

    printReverse(a, b);

    return 0;
}