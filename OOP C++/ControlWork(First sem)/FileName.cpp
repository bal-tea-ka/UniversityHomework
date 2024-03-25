#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdio>
#include <windows.h>
#include "Author.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("cls");

    int n_c, n_k, n_n;

    cout << "Для вывода информации введите 1\nДля изменения введите 2\nДля сортировки введите 3\nДля поиска информации по исполнителю введите 4\n\n" <<
        "Введите номер команды: ";
    cin >> n_c;
    system("cls");

    Authors a;
    a.get_n();

    switch (n_c) {
    case 1:
        a.print_inf(); system("pause");
        main();
    case 2:
        a.print_inf();
        cout << "Для изменения строки ввведите 1\nДля удаления строки введите 2\n" << 
            "Для добавления строки введите 3\n"
            << "\nВведите номер команды: ";
        cin >> n_k;
        system("cls");
        a.print_inf();
        switch (n_k) {
        case 1:
            a.change_s();
            system("cls");
            main();
        case 2:
            a.del_s();
            system("cls");
            main();
        case 3:
            a.plus_s();
            system("cls");
            main();
        default:
            cout << "Ошибка, попробуйте снова\n\n";
            system("cls");
            main();
        }
        main();
    case 3:
        system("cls");

        cout << "Для сортировки по количеству прослушиваний введите 1\nДля сортировки по заработку введите 2\n\n" <<
            "Введите номер команды: ";
        cin >> n_n;
        system("cls");
        switch (n_n) {
        case 1:
            a.sort_listening();system("pause");
            main();
        case 2:
            a.sort_salary(); system("pause");
            main();
        default:
            cout << "Ошибка, попробуйте снова\n\n";
            main();
        }
        system("cls");
        main();
    case 4:
        a.search();
        system("pause");
        main();
    default:
        cout << "Ошибка, попробуйте снова!\n\n";
        system("pause");
        main();
    }
    return 0;
}