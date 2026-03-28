#include <iostream>
using namespace std;

struct Student {
    string name;
    string group;
    int grades[5];
};

void printExcellent(Student* arr, int size);
void printBad(Student* arr, int size);

int main() {
    system("chcp 65001>null");

    int size = 0;
    Student* students = nullptr;

    int choice;

    do {
        cout << "\n1. Додати студентів\n";
        cout << "2. Відмінники\n";
        cout << "3. Двієчники\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        if (choice == 1) {
            int add;
            cout << "Скільки додати?: ";
            cin >> add;

            Student* temp = new Student[size + add];

            for (int i = 0; i < size; i++)
                temp[i] = students[i];

            for (int i = size; i < size + add; i++) {
                cout << endl << "Студент №" << i + 1 << endl;

                cout << "Прізвище: ";
                cin >> temp[i].name;

                cout << "Група: ";
                cin >> temp[i].group;

                cout << "5 оцінок: ";
                for (int j = 0; j < 5; j++)
                    cin >> temp[i].grades[j];
            }

            delete[] students;
            students = temp;
            size += add;
        }

        else if (choice == 2) {
            printExcellent(students, size);
        }

        else if (choice == 3) {
            printBad(students, size);
        }

    } while (choice != 0);

    delete[] students;
    return 0;
}

void printExcellent(Student* arr, int size) {
    cout << "\n==== ВІДМІННИКИ ====\n";

    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < 5; j++)
            if (arr[i].grades[j] == 5)
                count++;

        if (count >= 4) {
            cout << arr[i].name << " (" << arr[i].group << ")" << endl;
        }
    }
}

void printBad(Student* arr, int size) {
    cout << "\n==== ПРОБЛЕМНІ ====\n";

    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < 5; j++)
            if (arr[i].grades[j] <= 3)
                count++;

        if (count >= 3) {
            cout << arr[i].name << " (" << arr[i].group << ")" << endl;
        }
    }
}