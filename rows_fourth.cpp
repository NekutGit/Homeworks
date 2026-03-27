#include <iostream>
#include <string>

using namespace std;

int main() {
    system("chcp 65001>null");

    string text, word, longest = "";

    cout << "Введіть рядок: ";
    getline(cin, text);

    for (char s : text) {
        if (s != ' ') {
            word += s;
        } else {
            if (word.length() > longest.length())
                longest = word;
            word = "";
        }
    }

    if (word.length() > longest.length())
        longest = word;

    cout << "Найдовше слово: " << longest;

    return 0;
}