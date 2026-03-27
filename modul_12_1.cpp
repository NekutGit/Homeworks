#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    system("chcp 65001>null");

    ifstream file("C:/Users/User/Desktop/STEP/c++/workspace12/text.txt");

    if (!file) {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    string line;
    int lines = 0;
    int words = 0;

    while (getline(file, line)) {
        lines++;

        string word = "";
        for (char s : line) {
            if (s != ' ' && s != '\t') {
                word += s;
            } else {
                if (!word.empty()) {
                    words++;
                    word = "";
                }
            }
        }

        if (!word.empty()) {
            words++;
        }
    }

    cout << "Кількість рядків: " << lines << endl;
    cout << "Кількість слів: " << words << endl;

    file.close();

    return 0;
}