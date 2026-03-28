#include <iostream>
using namespace std;

struct Details {
    string engine;
    string color;
    int owners;
};

struct Car {
    string brand;
    string model;
    int year;
    float price;
    bool bargain;
    Details info;
};

void carsOut(Car* cars, int n);

int main() {
    system("chcp 65001>null");

    int n;
    cout << "Скільки авто?: ";
    cin >> n;

    Car* cars = new Car[n];

    for (int i = 0; i < n; i++) {
        cout << endl << "Авто №" << i + 1 << endl;

        cout << "Марка: ";
        cin >> cars[i].brand;

        cout << "Модель: ";
        cin >> cars[i].model;

        cout << "Рік: ";
        cin >> cars[i].year;

        cout << "Ціна ($): ";
        cin >> cars[i].price;

        cout << "Торг (1-так / 0-ні): ";
        cin >> cars[i].bargain;

        cout << "Двигун: ";
        cin >> cars[i].info.engine;

        cout << "Колір: ";
        cin >> cars[i].info.color;

        cout << "К-сть власників: ";
        cin >> cars[i].info.owners;
    }

    carsOut(cars, n);

    delete[] cars;
    return 0;
}

void carsOut(Car* cars, int n) {
    cout << "\n==== СПИСОК АВТО ====\n";

    for (int i = 0; i < n; i++) {
        cout << cars[i].brand << " "
             << cars[i].model << " | "
             << cars[i].year << " | "
             << cars[i].price << "$ | "
             << (cars[i].bargain ? "Торг" : "Без торгу") << " | "
             << cars[i].info.engine << " | "
             << cars[i].info.color << " | "
             << cars[i].info.owners << " власн." << endl;
    }
}