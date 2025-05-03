using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Сортировка пузырьком
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    cout << "Отсортированный массив:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
