// Подсчитать количество элементов, не попадающих в заданный интервал.

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int rows, cols;

	std::cin >> rows >> cols;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows;++i) {
		for (int j = 0; j < cols;j++) {
			std::cin >> arr[i][j];
		}
	}
	int ot, doo;
	int countIn = 0;
	int countOut = 0;
	std::cout << "введите интервал" << std::endl;
	std::cin >> ot >> doo;

	for (int i = 0; i < rows;++i) {
		for (int j = 0; j < cols;j++) {
			if (arr[i][j] >= ot and arr[i][j] <= doo) {
				countIn += 1;
			}
			else
				countOut += 1;

		}
	}
	std::cout << countOut;

}
