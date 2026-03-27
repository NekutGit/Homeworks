#include <iostream>
#include <string>

using namespace std;

int main() {
    system("chcp 65001>null");

    string text, oldWord, newWord;

    cout << "Введіть рядок: ";
    getline(cin, text);

    cout << "Що замінити, та на що: ";
    cin >> oldWord >> newWord;

    size_t pos = 0;

    while ((pos = text.find(oldWord, pos)) != string::npos) {
        text.replace(pos, oldWord.length(), newWord);
        pos += newWord.length();
    }

    cout << "Результ:" << endl << text;

    return 0;
}