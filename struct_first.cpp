#include <iostream>
using namespace std;

typedef struct {
    string name;
    char gender;
    float avg;
} Student;

int main() {
    system("chcp 65001>null");

    int n;
    cout << "Введіть кількість студентів: ";
    cin >> n;

    Student* group = new Student[n];

    float boysSum = 0, girlsSum = 0;
    int boysCount = 0, girlsCount = 0;

    for (int i = 0; i < n; i++) {
        cout << endl << "Студент №" << i + 1 << endl;
        cout << "Прізвище: ";
        cin >> group[i].name;

        cout << "Стать (m/f): ";
        cin >> group[i].gender;

        cout << "Середній бал: ";
        cin >> group[i].avg;

        if (group[i].gender == 'm') {
            boysSum += group[i].avg;
            boysCount++;
        } else if (group[i].gender == 'f') {
            girlsSum += group[i].avg;
            girlsCount++;
        } else {
            cout << "Сталася помилка, спробуйте ще раз";
            i--;
        }
    }

    float boysAvg = boysCount ? boysSum / boysCount : 0;
    float girlsAvg = girlsCount ? girlsSum / girlsCount : 0;

    cout << endl << "Середній бал юнаків: " << boysAvg << endl;
    cout << "Середній бал дівчат: " << girlsAvg << endl;

    if (boysAvg > girlsAvg)
        cout << "Юнаки мають вищий середній бал." << endl;
    else if (girlsAvg > boysAvg)
        cout << "Дівчата мають вищий середній бал." << endl;
    else
        cout << "Середні бали рівні." << endl;

    delete[] group;
    return 0;
}