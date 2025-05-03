#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Сортировка вставками
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

    cout << "Отсортированный массив:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
