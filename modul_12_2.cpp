#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    system("chcp 65001>null");

    string filename;
    cout << "Введіть ім'я та формат файлу: ";
    cin >> filename;

    ifstream file("C:/Users/User/Desktop/STEP/c++/workspace12/" + filename);

    if (!file) {
        cout << "Файл не знайдено!" << endl;
        return 1;
    }

    string line;

    cout << endl <<"Вміст файлу:" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}