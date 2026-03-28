#include <iostream>
using namespace std;

int sumDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}

int main() {
    system("chcp 65001>null");

    int n;
    cout<<"Введіть число для обчислення суми цифр у ньому: ";
    cin >> n;

    cout << sumDigits(n);

    return 0;
}