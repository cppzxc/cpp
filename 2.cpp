
#include <iostream>
#include <string>

int main()
{
    int rows, cols;
    std::cout << "введите строки и столбцы: ";
    std::cin >> rows >> cols;

    int** arr = new int*[rows];
    for (int i = 0;i < rows;++i) {
        arr[i] = new int [cols];
    }

    for (int i = 0; i < rows;++i) {
        for (int j = 0;j < cols;++j)
            std::cin >> arr[i][j];
    }
    int maxEl = arr[0][0];

    for (int i = 0; i < rows;++i) {
        for (int j = 0;j < cols;++j)
            if (maxEl < arr[i][j]){
            maxEl = arr[i][j];
            }
    }

    for (int i = 0; i < rows;++i) {
        for (int j = 0;j < cols;++j)
            if (maxEl == arr[i][j]) {
                arr[i][j] = arr[0][0];
            }
    }
    
    arr[0][0] = maxEl;
    for (int i = 0; i < rows;++i) {
        for (int j = 0;j < cols;++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }

    
}

