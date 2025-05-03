// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int rows, cols;
	std::cin >> rows >> cols;

	int** arr = new int*[rows];
	for (int i = 0; i < rows;++i) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			std::cin >> arr[i][j];

	}
	int maxI = 0;
	int maxj = 0;
	int maxel = arr[0][0];
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			if (arr[i][j]>= maxel) {
				maxel = arr[i][j];
				maxI = i;
				maxj = j;
			}
	}
	int minel = arr[0][0];
	int minI = 0;
	int minj = 0;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			if (minel > arr[i][j]) {
				minel = arr[i][j];
				minI = i;
				minj = j;
			}
	}
	
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (i == minI and j == minj)
			arr[minI][minj] = maxel;
		}
		
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (i == maxI and j == maxj)
				arr[maxI][maxj] = minel;
		}

	}

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			std::cout << arr[i][j] <<" ";
		std::cout << std::endl;

	}


}

