#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

bool isSameLetter(const string& line) {
    int start = 0, end = line.length() - 1;

    // Пропускаем небуквенные символы в начале и конце
    while (start < line.length() && !isalpha(line[start])) ++start;
    while (end >= 0 && !isalpha(line[end])) --end;

    if (start >= end) return false; // нет двух букв

    return tolower(line[start]) == tolower(line[end]);
}

int main() {
    setlocale(LC_ALL, "ru");
    ifstream file("text.txt");
    if (!file) {
        cout << "Не удалось открыть файл.\n";
        return 1;
    }

    string line;
    int count = 0;

    while (getline(file, line)) {
        if (isSameLetter(line)) {
            ++count;
        }
    }

    cout << "Количество строк, начинающихся и заканчивающихся одной буквой: " << count << endl;
    return 0;
}