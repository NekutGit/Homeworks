#include <iostream>

using namespace std;

int main() {
    system("chcp 65001>null");

    char str[64];
    char ch;
    int count = 0;

    cout << "Введіть рядок: ";
    cin.getline(str, 64);

    cout << "Введіть символ: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == tolower(ch)) count++;
    }

    cout << "Кількість: " << count;

    return 0;
}