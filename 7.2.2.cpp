//Удалить из массива все элементы, последняя цифра которых равна данной со сдвигом
#include <iostream>


void delDigit(int*& arr, int& size, int digit)
{
    int newSize=0;

    for (int i = 0; i < size;++i){
        if (abs(arr[i] % 10) != digit) {
            ++newSize;
        }
    }
    int* newArr = new int[newSize];
    int j = 0;
    for (int i = 0; i < size;++i) {
        if (abs(arr[i] % 10) != digit) {
            newArr[j++]=arr[i];
        }
    }
    delete[] arr;
    size = newSize;
    arr = newArr;
}
int main()
{
    int size;
    std::cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size;i++) {
        std::cin >> arr[i];
    }
    int digit;
    std::cin >> digit;
    delDigit(arr, size, digit);

    for (int i = 0; i < size;++i) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;

}

