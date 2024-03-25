#pragma once
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Author {
public:
    string name;
    float price_s;
    int n_listening;
    long double salary;
};

class Authors {
public:
    int n;
    int get_n() {
        n = 0;
        string line;

        ifstream in1;
        in1.open("D:\\authors.txt");
        if (in1.is_open()) {
            while (getline(in1, line)) {
                this->n++;
            }
        }
        in1.close();
        return n;
    };
    Author* a = new Author[get_n()];


    void read() {
        ifstream in;
        in.open("D:\\authors.txt");
        string line; int i = 0;
        if (in.is_open()) {
            while (getline(in, line)) {
                istringstream iss(line);
                string token;
                int j = 0;
                while (getline(iss, token, '-')) {
                    if (j == 0) a[i].name = token;
                    if (j == 1) a[i].price_s = stof(token.c_str());
                    if (j == 2) a[i].n_listening = stoi(token.c_str());
                    if (j == 3) a[i].salary = stod(token.c_str());
                    j++;
                };
                i++;
            }
        }
        else {
            cout << "Ошибка открытия файла\n";
        }

        in.close();
    }
    void print_inf() {

        read();

        cout << "\t************************************\n\n" <<
            "Статистика по исполителям из Вашего плейлиста:\n\n";

        for (int k = 0; k < n; k++) {
            cout << k + 1 << ". Имя: " << a[k].name << "\tЦена прослушивания: " << a[k].price_s << " руб." << "\nКоличество прослушиваний: " << a[k].n_listening << "\tЗаработок: " <<
                a[k].salary << " руб.\n\n";
        }
        cout << "\t************************************\n\n";
    }
    void change_s() {
        int number;
        cout << "Введите номер изменяемой строки: ";
        cin >> number;
        number -= 1;

        system("cls");
        cout << "Выбранная строка:\n\n" << "Имя: " << a[number].name
            << "\tЦена прослушивания: " << a[number].price_s << " рублей" << "\nКолличество прослушиваний: " << a[number].n_listening <<
            "\tЗаработок: " << a[number].salary << " рублей\n\n";


        cout << "Для изменения имени введите 1\n"
            << "Для изменения цены прослушивания введите 2\n"
            << "Для изменения количества прослушиваний введите 3\n\n"
            << "Введите номер команды: ";
        int c;
        cin >> c;
        string p;
        if (c == 1) {
            cout << "Введите новое имя исполнителя: ";
            cin.ignore();
            getline(cin, a[number].name);
        }
        if (c == 2) {
            cout << "Введите новую цену прослушивания в рублях: ";
            cin.ignore();
            getline(cin, p);
            a[number].price_s = stof(p.c_str());
            a[number].salary = a[number].price_s * a[number].n_listening;
        }
        if (c == 3) {
            cout << "Введите новое колличество прослушиваний: ";
            cin >> a[number].n_listening;
            a[number].salary = a[number].price_s * a[number].n_listening;
        }
        string sep = "-";
        ofstream out("D:\\file.txt");
        ifstream in;
        string line;
        in.open("D:\\authors.txt");
        if (in.is_open()) {
            int counter = 0;
            while (getline(in, line)) {
                if (counter != number) {
                    out << line << "\n";

                }
                else {
                    out << a[number].name << sep << a[number].price_s << sep <<
                        a[number].n_listening << sep << a[number].salary << "\n";
                }
                counter++;
            }
        }

        in.close();
        out.close();

        cout << "\nСтрока успешно изменена на:\n\n" << "Имя: " << a[number].name << "\tЦена прослушивания: " << a[number].price_s << " руб." <<
            "\nКоличество прослушиваний: " << a[number].n_listening << "\tЗаработок: " << a[number].salary << " руб.\n\n";

        char filename2[] = "D:\\authors.txt";
        int result2 = remove(filename2);

        char filename3[] = "D:\\file.txt";
        int result3 = rename("D:\\file.txt", "D:\\authors.txt");

        read();

    }
    void del_s() {
        ofstream out("D:\\file.txt");
        ifstream in;
        string line;
        int count;
        int counter = 1;
        in.open("D:\\authors.txt");

        cout << "Введите номер удаляемой строки: ";
        cin >> count;
        if (in.is_open()) {
            while (getline(in, line)) {
                if (counter != count) {
                    out << line << "\n";

                }
                counter++;
            }
            cout << "Строка успешно удалена\n";
        }

        in.close();
        out.close();

        char filename2[] = "D:\\authors.txt";
        int result2 = remove(filename2);

        char filename3[] = "D:\\file.txt";
        int result3 = rename("D:\\file.txt", "D:\\authors.txt");

        read();
    }
    void plus_s() {
        string name, p;
        int n_listening;
        float price_s;
        double salary;
        string sep = "-";
        ofstream out("D:\\authors.txt", ios::app);
        if (out.is_open()) {
            cout << "Введите имя исполнителя: ";
            cin.ignore();
            getline(cin, name);
            cout << "\nВведите цену прослушивания в рублях: ";
            getline(cin, p);
            price_s = stof(p.c_str());
            cout << "\nВведите количество прослушиваний: ";
            cin >> n_listening;
            salary = price_s * n_listening;

            out << name << sep << price_s << sep <<
                n_listening << sep << salary << "\n";
        }
        else {
            cout << "Ошибка чтения файла";
        }
        out.close();

        read();
    }
    void sort_listening() {
        int n_kk;

        read();
        cout << "Для сортировки по возрастанию введите 1\nДля сортировки по убыванию введите 2\n\nВведите номер команды: ";

        cin >> n_kk;

        switch (n_kk) {
        case 1:
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (a[j].n_listening > a[j + 1].n_listening) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
            break;
        case 2:
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (a[j].n_listening < a[j + 1].n_listening) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
            break;
        default:
            cout << "Ошибка, попробуйте снова\n\n";
            system("pause");
            sort_listening();
        }


        cout << "\n\n\t************************************\n\n" <<
            "Отсорированная статистика по исполителям из Вашего плейлиста:\n\n";

        for (int k = 0; k < n; k++) {
            cout << k + 1 << ". Имя: " << a[k].name << "\tЦена прослушивания: " << a[k].price_s << " руб." << "\nКоличество прослушиваний: " << a[k].n_listening << "\tЗаработок: " <<
                a[k].salary << " руб.\n\n";
        }
        cout << "\t************************************\n\n";
    }
    void sort_salary() {
        int n_kk;
        cout << "Для сортировки по возрастанию введите 1\nДля сортировки по убыванию введите 2\n\nВведите номер команды: ";
        cin >> n_kk;
        read();
        switch (n_kk) {
        case 1:
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (a[j].salary > a[j + 1].salary) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
            break;
        case 2:
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (a[j].salary < a[j + 1].salary) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
            break;
        default:
            cout << "Ошибка, попробуйте снова";
            system("pause");
            sort_salary();
        }


        cout << "\n\n\t************************************\n\n" <<
            "Отсорированная статистика по исполителям из Вашего плейлиста:\n\n";

        for (int k = 0; k < n; k++) {
            cout << k + 1 << ". Имя: " << a[k].name << "\tЦена прослушивания: " << a[k].price_s << " руб." << "\nКоличество прослушиваний: " << a[k].n_listening << "\tЗаработок: " <<
                a[k].salary << " руб.\n\n";
        }
        cout << "\t************************************\n\n";
    }
    void search() {
        read();
        string name;
        cout << "Введите имя искомого исполнителя: ";
        cin.ignore();
        getline(cin, name);
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (a[i].name == name) {
                cout << "\n\nИмя: " << a[i].name << "\tЦена прослушивания: " << a[i].price_s << " руб." << "\nКоличество прослушиваний: " << a[i].n_listening <<
                    "\tЗаработок: " << a[i].salary << " руб.\n\n";
                flag = true;
            }
        }
        if (!flag) { cout << "Искомого испольнителя нет :((\n\n"; };
    }

};