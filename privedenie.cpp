#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isNumber(const string& s) {
    for (char c : s)
        if (!isdigit(c)) return false;
    return true;
}

int main() {
    string str;
    cout << "Введите число в виде строки: ";
    cin >> str;

    if (isNumber(str)) {
        int num = stoi(str);
        cout << "Преобразованное число: " << num << endl;
        cout << "Удвоенное значение: " << num * 2 << endl;
    }
    else {
        cout << "Ошибка: строка не является числом!" << endl;
    }

    return 0;
}
