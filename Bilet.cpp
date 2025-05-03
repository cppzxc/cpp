// Bilet.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cin >> rows >> cols;
    int a;
    cin >> a;
    int** arr = new int* [rows];
    for (int i = 0;i < rows;++i)
        arr[i] = new int[cols];
    for (int i = 0;i < rows;++i) {
        for (int j = 0;j < cols; ++j)
            cin >> arr[i][j];
    }

    int maxrow = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] % a == 0) {
                maxrow = i + 1;
            }
        }
        break;
    }
    cout << maxrow;
}
