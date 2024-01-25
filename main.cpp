#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result  *= i;
    }
    return result;
}

int main() {
    system("chcp 65001");
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
                         "\tЕсли вы хотите выйти нажмите - \"9\"\n"
                         "Операция: ";
        cin >> choice;

        if (isdigit(choice)){
            if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 7){
                cout << "Введите первое число: ";
                cin >> a;
                if (isdigit(a)){
                    cout << "Введите второе число: ";
                    cin >> b;
                    if (isdigit(b)){
                        continue;
                    }
                } else{
                    cout << "Введено не ЧИСЛО!";
                    break;
                }
            }
            else if (choice == 6 || choice == 8){
                if (isdigit(a)){
                    cout << "Введите число: ";
                    cin >> a;
                } else{
                    cout << "Введено не ЧИСЛО!";
                    break;
                }
            }
        } else{
            cout << "Такой операции нет!\n";
            break;
        }

        switch (choice) {
            case 1:
                cout << a + b << "\n";
                break;
            case 2:
                cout << a - b << "\n";
                break;
            case 3:
                cout << a * b << "\n";
                break;
            case 4:
                if (b == 0) {
                    cout << "Нельзя делить на ноль!!!\n";
                } else {
                    cout << a / b << "\n";
                }
                break;
            case 5:
                cout << pow(a,b) << "\n";
                break;
            case 6:
                cout << sqrt(a) << "\n";
                break;
            case 7:
                cout << ((a /100) * b) << "%" << "\n";
                break;
            case 8:
                cout << factorial(a) << "\n";
                break;
            default:
                break;
        }
    } while (choice != 9);

    cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
    getch();

    return 0;
}
