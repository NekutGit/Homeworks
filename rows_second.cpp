#include <iostream>
#include <string>

using namespace std;

int main() {
	system("chcp 65001>null");

    string names[5];
    cout << "Введіть 5 прізвищ (тільки латинські літери): " << endl;
    for (int i = 0; i < 5; i++) cin >> names[i];

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (names[j] < names[j + 1]) {
                swap(names[j], names[j + 1]);
            }
        }
    }

    cout << endl <<"Відсортовані:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }

    return 0;
}