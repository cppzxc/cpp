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

    // Сортировка выбором
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[i], arr[minIndex]);
    }

    cout << "Отсортированный массив:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
