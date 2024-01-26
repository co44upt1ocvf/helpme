#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int factorial(double n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    system("chcp 65001");
    double a, b = 0.0;
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
        if (cin >> choice)
        {
            switch (choice) {
                case 1:
                    cout << "Введите первое число: ";
                    if (cin >> a)
                    {
                        cout << "Введите второе число: ";
                        if (cin >> b)
                        {
                            cout << "Результат: " << a + b << endl;
                        }
                        else
                        {
                            cout << "Введено НЕ число!\n" << endl;
                            cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                            getch();
                            exit(0);
                        }
                    }
                    else
                    {
                        cout << "Введено НЕ число!\n" << endl;
                        cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                        getch();
                        exit(0);
                    }
                    break;
                case 2:
                    cout << "Введите первое число: ";
                    if (cin >> a)
                    {
                        cout << "Введите второе число: ";
                        if (cin >> b)
                        {
                            cout << "Результат: " << a - b << endl;
                        }
                        else
                        {
                            cout << "Введено НЕ число!\n" << endl;
                            cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                            getch();
                            exit(0);
                        }
                    }
                    else
                    {
                        cout << "Введено НЕ число!\n" << endl;
                        cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                        getch();
                        exit(0);
                    }
                    break;
                case 3:
                    cout << "Введите первое число: ";
                    if (cin >> a)
                    {
                        cout << "Введите второе число: ";
                        if (cin >> b)
                        {
                            cout << "Результат: " << a * b << endl;
                        }
                        else
                        {
                            cout << "Введено НЕ число!\n" << endl;
                            cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                            getch();
                            exit(0);
                        }
                    }
                    else
                    {
                        cout << "Введено НЕ число!\n" << endl;
                        cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                        getch();
                        exit(0);
                    }
                    break;
                case 4:
                    cout << "Введите первое число: ";
                    if (cin >> a)
                    {
                        cout << "Введите второе число: ";
                        if (cin >> b)
                        {
                            if (b == 0) {
                                cout << "Нельзя делить на ноль!!!\n";
                            }
                            else {
                                cout << a / b << endl;
                            }
                        }
                        else
                        {
                            cout << "Введено НЕ число!\n" << endl;
                            cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                            getch();
                            exit(0);
                        }
                    }
                    else
                    {
                        cout << "Введено НЕ число!\n" << endl;
                        cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                        getch();
                        exit(0);
                    }
                    break;
                case 5:
                    cout << "Введите первое число: ";
                    if (cin >> a)
                    {
                        cout << "Введите второе число: ";
                        if (cin >> b)
                        {
                            cout << "Результат: " << pow(a, b) << endl;
                        }
                        else
                        {
                            cout << "Введено НЕ число!\n" << endl;
                            cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                            getch();
                            exit(0);
                        }
                    }
                    else
                    {
                        cout << "Введено НЕ число!\n" << endl;
                        cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                        getch();
                        exit(0);
                    }
                    break;
                case 6:
                    cout << "Введите число: ";
                    if (cin >> a)
                    {
                        cout << sqrt(a) << endl;
                    }
                    else {
                        cout << "Введено НЕ число!\n" << endl;
                        cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                        getch();
                        exit(0);
                    }
                    break;
                case 7:
                    cout << "Введите первое число: ";
                    if (cin >> a)
                    {
                        cout << "Введите второе число: ";
                        if (cin >> b)
                        {
                            cout << "Результат: " << ((a / 100) * b) << "%" << endl;
                        }
                        else
                        {
                            cout << "Введено НЕ число!\n" << endl;
                            cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                            getch();
                            exit(0);
                        }
                    }
                    else
                    {
                        cout << "Введено НЕ число!\n" << endl;
                        cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                        getch();
                        exit(0);
                    }
                    break;
                case 8:
                    cout << "Введите число: ";
                    if (cin >> a)
                    {
                        cout << factorial(a) << "\n";
                    }
                    else {
                        cout << "Введено НЕ число!\n" << endl;
                        cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
                        getch();
                        exit(0);
                    }
                    break;
                default:
                    break;
            }
        }
        else
        {
            cout << "Введено НЕ число!\n" << endl;
            cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
            getch();
            exit(0);
        }
    } while (choice != 9);

    cout << "Нажмите на любую клавишу, чтобы закрыть окно!" << endl;
    getch();

    return 0;
}