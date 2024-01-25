#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    double a, b;
    int choice;
    do {
        cout << "Выберите операцию:\n"
                     "\t1. Сложение\n"
                     "\t2. Вычитание\n"
                     "\t3. Умножение\n"
                     "\t4. Деление\n"
                     "\t5. Возведение в степень\n"
                     "\t6. Нахождения квадратного корня\n"
                     "\t7. Нахождение 1 процента от числа\n"
                     "\t8. Найти факториал числа\n"
                     "\t Если вы хотите выйти нажмите - \"9\"\n"
                     "Операция: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << a + b << "\n";
                break;
            case 2:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << a - b << "\n";
                break;
            case 3:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << a * b << "\n";
                break;
            case 4:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                if (b == 0) {
                    cout << "Нельзя делить на ноль!!!\n";
                } else {
                    cout << a / b << "\n";
                }
                break;
            case 5:
                cout << "Введите число: ";
                cin >> a;
                cout << "Введите степень: ";
                cin >> b;
                cout << pow(a, b) << "\n";
                break;
            case 6:
                cout << "Введите число: ";
                cin >> a;
                cout << sqrt(a) << "\n";
                break;
            case 7:
                cout << "Введите число: ";
                cin >> a;
                cout << "Введите процент: ";
                cin >> b;
                cout << ((a / 100) * b) << "%" << "\n";
                break;
            case 8:
                cout << "Введите число: ";
                cin >> a;
                cout << factorial(a) << "\n";
                break;
            default:
                cout << "Такой операции нет!\n";
        }
    } while (choice != 9);
    cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
    getch();

    return 0;
}

