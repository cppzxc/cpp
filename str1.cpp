#include <iostream>
#include <cmath> // для abs

int main() {
    const int rows = 3, cols = 4;
    int arr[rows][cols] = {
        {12, 33, 45, 23},
        {13, 54, 73, 80},
        {91, 27, 83, 60}
    };

    int digit;
    std::cin >> digit;

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (abs(arr[i][j]) % 10 == digit)
                arr[i][j] = 0; // пометка "удаления"

    // вывод результата
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            std::cout << arr[i][j] << ' ';
        std::cout << '\n';
    }

    return 0;
}