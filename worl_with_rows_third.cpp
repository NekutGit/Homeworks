#include <iostream>
#include <cctype>

using namespace std;

int main() {
    system("chcp 65001>null");

    char str[64];

    cout << "Введіть слово (тільки латинські): ";
    cin.getline(str, 64);

    int letters = 0, digits = 0, others = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            letters++;
        else if (isdigit(str[i]))
            digits++;
        else
            others++;
    }

    cout << "Літери: " << letters << endl;
    cout << "Цифри: " << digits << endl;
    cout << "Інші: " << others << endl;

    return 0;
}