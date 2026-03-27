#include <iostream>
using namespace std;

int main() {
    system("chcp 65001>null");

    char str[100];
    char ch;

    cout << "Введіть слово: ";
    cin.getline(str, 100);

    cout << "Введіть символ, який потрібно знайти: ";
    cin >> ch;

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) count++;
    }

    if (count > 0)
        cout << "Символ зустрічається " << count << " раз/разів";
    else
        cout << "Символ не знайдено";

    return 0;
}