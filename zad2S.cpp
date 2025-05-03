#include <iostream>
#include <string>

int main() {
    // Объявление и инициализация строк
    std::string str1 = "Привет";
    std::string str2 = "мир";

    // Конкатенация строк
    std::string result = str1 + ", " + str2 + "!";
    std::cout << "Результат конкатенации: " << result << std::endl;

    // Длина строки
    std::cout << "Длина строки: " << result.length() << std::endl;

    // Поиск подстроки
    size_t pos = result.find("мир");
    if (pos != std::string::npos) {
        std::cout << "\"мир\" найден на позиции: " << pos << std::endl;
    } else {
        std::cout << "\"мир\" не найден" << std::endl;
    }

    // Замена подстроки
    result.replace(pos, 3, "вселенная");
    std::cout << "После замены: " << result << std::endl;

    // Получение подстроки
    std::string sub = result.substr(8, 9);  // от позиции 8, 9 символов
    std::cout << "Подстрока: " << sub << std::endl;

    // Ввод строки от пользователя
    std::string userInput;
    std::cout << "Введите строку: ";
    std::getline(std::cin, userInput);  // ввод строки с пробелами
    std::cout << "Вы ввели: " << userInput << std::endl;

    return 0;
}
