#include <iostream>
#include <string>

using namespace std;

int main() {
    system("chcp 65001>null");

    string text;
    cout << "Введіть рядок: ";
    cin >> text;

    bool isPalin = true;

    for (int i = 0; i < text.length() / 2; i++) {
        if (text[i] != text[text.length() - 1 - i]) {
            isPalin = false;
            break;
        }
    }

    if (isPalin)
        cout << "Це паліндром";
    else
        cout << "Це не паліндром";

    return 0;
}