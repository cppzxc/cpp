#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    // Ввод элементов от пользователя
    int n;
    std::cout << "Сколько чисел хотите ввести? ";
    std::cin >> n;

    std::cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; ++i) {
        int value;
        std::cin >> value;
        numbers.push_back(value);
    }

    // Вывод элементов вектора
    std::cout << "Вы ввели:\n";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";

    // Ручной поиск элемента
    int target;
    std::cout << "Введите число для поиска: ";
    std::cin >> target;

    bool found = false;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == target) {
            std::cout << "Число найдено на позиции " << i << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Число не найдено\n";
    }

    // Удаление последнего элемента
    if (!numbers.empty()) {
        numbers.pop_back();
        std::cout << "Последний элемент удалён. Осталось:\n";
        for (int i = 0; i < numbers.size(); ++i) {
            std::cout << numbers[i] << " ";
        }
        std::cout << "\n";
    }
    else {
        std::cout << "Вектор пуст, нечего удалять.\n";
    }

    return 0;
}
