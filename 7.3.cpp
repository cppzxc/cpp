// Вставить новый элемент перед всеми четными элементами

#include <iostream>
void addNewItem(int*& arr, int& size, int newItem) {
    int countChet = 0;
    for (int i = 0;i < size;++i) {
        if (arr[i] % 2 == 0)
            countChet += 1;
    }
    int newSize = size + countChet;
    int* newArr = new int[newSize];
    int j = 0;
    for (int i = 0; i < size;++i) {
        if (arr[i] % 2 == 0){
            newArr[j++] = newItem;
        }
        newArr[j++] = arr[i];
    }
    arr = newArr;
    size = newSize;

}
int main()
{
    int size;
    std::cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size;i++){
        std::cin >> arr[i];
    }
    std::cout << "Введите элемент";
    int newItem;
    std::cin >> newItem;
    addNewItem(arr, size, newItem);
    for (int i = 0; i < size;i++) {
        std::cout << arr[i];
    }


}

