#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "example.txt";

    // Запись в файл
    std::ofstream outfile(filename);  // ofstream — для записи
    if (!outfile) {
        std::cerr << "Не удалось открыть файл для записи\n";
        return 1;
    }

    outfile << "123" << std::endl;
    outfile << "456" << std::endl;
    outfile << "789" << std::endl;
    outfile.close();  // Закрываем файл после записи

    // Чтение из файла и преобразование строк в числа
    std::ifstream infile(filename);  // ifstream — для чтения
    if (!infile) {
        std::cerr << "Не удалось открыть файл для чтения\n";
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        try {
            int number = std::stoi(line);  // Преобразование строки в целое число
            std::cout << "Прочитано число: " << number << std::endl;
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Ошибка преобразования строки в число: " << line << std::endl;
        }
        catch (const std::out_of_range& e) {
            std::cerr << "Число слишком велико: " << line << std::endl;
        }
    }

    infile.close();  // Закрываем файл после чтения

    return 0;
}
