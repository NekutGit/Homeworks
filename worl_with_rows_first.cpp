#include <iostream>
using namespace std;

void limitedFunction(int limit, bool reset = false) {
    static int counter = 0;

    if (reset) {
        counter = 0;
        cout << "Лічильник скинуто." << endl;
        return;
    }

    if (counter < limit) {
        counter++;
        cout << "Виклик №" << counter << ": Функція виконана успішно." << endl;
    } else {
        cout << "Перевищено ліміт викликів!" << endl;
    }
}

int main() {
    system("chcp 65001>null");

    int limit;
    cout << "Вкажіть ліміт викликів: ";
    cin >> limit;

    cout << "Тест 1:" << endl;
    for (int i = 0; i < 4; i++) {
        limitedFunction(limit);
    }

    cout << endl <<"Скидання:" << endl;
    limitedFunction(limit, true);

    cout << "Тест 2:" << endl;
    for (int i = 0; i < 2; i++) {
        limitedFunction(limit);
    }

    cout << endl <<"Скидання:" << endl;
    limitedFunction(limit, true);

    cout << "Тест 3:" << endl;
    for (int i = 0; i < 6; i++) {
        limitedFunction(limit);
    }

    return 0;
}