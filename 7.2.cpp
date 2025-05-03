//Удалить из массива все элементы, последняя цифра которых равна данной со сдвигом
#include <iostream>

void removeByLastDigit(int*& array, int& size, int digit) {
    int newSize = 0;


    for (int i = 0; i < size; ++i) {
        if (abs(array[i]) % 10 != digit)
            ++newSize;
    }

    int* newArray = new int[newSize];
    int j = 0;
    for (int i = 0; i < size; ++i) {
        if (abs(array[i]) % 10 != digit)
            newArray[j++] = array[i];
    }


    delete[] array;
    array = newArray;
    size = newSize;
}

int main() {
    setlocale(LC_ALL, "ru");
    int size, digit;

    std::cout << "размер : ";
    std::cin >> size;

    int* array = new int[size];

    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i)
        std::cin >> array[i];

    std::cout << "Enter digit to remove by last digit: ";
    std::cin >> digit;

    removeByLastDigit(array, size, digit);

    std::cout << "Resulting array:\n";
    for (int i = 0; i < size; ++i)
        std::cout << array[i] << " ";

    delete[] array;
    return 0;
}
