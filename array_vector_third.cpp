#include <iostream>
#include <ctime>

using namespace std;

void generatePassword(char*& pass, int& size) {
    pass = new char[size + 1];

    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%";

    pass[0] = 'a' + rand() % 26;
    pass[1] = 'A' + rand() % 26;
    pass[2] = '0' + rand() % 10;
    pass[3] = "!@#$%"[rand() % 5];

    for (int i = 4; i < size; i++) {
        pass[i] = chars[rand() % chars.length()];
    }

    pass[size] = '\0';
}

void printPassword(char* pass) {
    cout << "Новий надійний пароль: " << pass << endl;
}

int main() {
    srand(time(NULL));
    system("chcp 65001>null");

    int size;
    cout << "Введіть довжину пароля: ";
    cin >> size;

    if (size < 8) {
        cout << "Мінімальна довжина 8 символів." << endl;
        return 1;
    }

    char* password;

    generatePassword(password, size);
    printPassword(password);

    delete[] password;

    return 0;
}