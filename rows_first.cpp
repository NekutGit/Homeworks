#include <iostream>
#include <string>
using namespace std;

bool isValidIP(string ip) {
    int dots = 0;
    string num = "";

    for (char c : ip) {
        if (c == '.') {
            if (num.empty()) return false;
            int n = stoi(num);
            if (n < 0 || n > 255) return false;
            num = "";
            dots++;
        } else if (isdigit(c)) {
            num += c;
        } else {
            return false;
        }
    }

    if (num.empty()) return false;
    int n = stoi(num);
    if (n < 0 || n > 255) return false;

    return dots == 3;
}

int main() {
    system("chcp 65001>null");

    string ip;
    cout << "Введіть IP адресу: ";
    cin >> ip;

    if (isValidIP(ip))
        cout << "Коректна IP-адреса";
    else
        cout << "Некоректна IP-адреса";

    return 0;
}