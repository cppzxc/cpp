

#include <iostream>
#include <string>
using namespace std;

// Пузырьковая сортировка для одномерного массива
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    // Динамическое выделение памяти для двумерного массива
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Ввод элементов массива
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Сортировка каждой строки с использованием пузырьковой сортировки
    for (int i = 0; i < rows; i++) {
        bubbleSort(arr[i], rows);  // сортируем строку
    }

    // Вывод отсортированного массива
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    // Освобождение памяти
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}