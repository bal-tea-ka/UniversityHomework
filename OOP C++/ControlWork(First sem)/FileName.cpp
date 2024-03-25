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

    cout << "��� ������ ���������� ������� 1\n��� ��������� ������� 2\n��� ���������� ������� 3\n��� ������ ���������� �� ����������� ������� 4\n\n" <<
        "������� ����� �������: ";
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
        cout << "��� ��������� ������ �������� 1\n��� �������� ������ ������� 2\n" << 
            "��� ���������� ������ ������� 3\n"
            << "\n������� ����� �������: ";
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
            cout << "������, ���������� �����\n\n";
            system("cls");
            main();
        }
        main();
    case 3:
        system("cls");

        cout << "��� ���������� �� ���������� ������������� ������� 1\n��� ���������� �� ��������� ������� 2\n\n" <<
            "������� ����� �������: ";
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
            cout << "������, ���������� �����\n\n";
            main();
        }
        system("cls");
        main();
    case 4:
        a.search();
        system("pause");
        main();
    default:
        cout << "������, ���������� �����!\n\n";
        system("pause");
        main();
    }
    return 0;
}