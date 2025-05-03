
#include <string>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int rows, cols;
    std::cin >> rows >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows;++i) {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j)
        std::cin >> arr[i][j];
    }

    int minZnak = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            if (minZnak > arr[i][j]){
            minZnak = arr[i][j];
            }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            if (arr[i][j]== minZnak) {
                arr[i][j]= -arr[i][j];
            }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            std::cout << arr[i][j] << " ";
         std::cout << std::endl;
    }

}
