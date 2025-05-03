#include <iostream>
#include "3.h"
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    // Выделение памяти
    int** arr = new int* [rows];
    for (int i = 0; i < rows; ++i)
        arr[i] = new int[cols];

    // Ввод элементов
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> arr[i][j];

    // Поиск минимального элемента
    int minVal = arr[0][0];
    min(rows, cols, arr, minVal);

    // Замена на противоположный знак
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (arr[i][j] == minVal)
                arr[i][j] = -arr[i][j];

    // Вывод результата
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // Освобождение памяти
    for (int i = 0; i < rows; ++i)
        delete[] arr[i];
    delete[] arr;

    return 0;
}

void min(int rows, int cols, int** arr, int& minVal)
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (arr[i][j] < minVal)
                minVal = arr[i][j];
}
