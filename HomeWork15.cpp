#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int rows = 10;
	const int cols = 10;
	int arr[rows][cols];
	std::cout << "Двумерный массив: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 101;
			std::cout << arr[i][j] << '\t';
		}
		std::cout << "\n";
	}
	std::cout << "\n\tЗадача 1.\n\n";
	std::cout << "Посчитаем сумму каждого ряда.\n";
	for (int i = 0; i < rows; i++) {
	int sum_rows = 0;
		for (int j = 0; j < cols; j++) {
			sum_rows += arr[i][j];
		}			
		std::cout << "Сумма ряда " << i + 1 << " = " << sum_rows << '\n';
	}

	std::cout << "\n\tЗадача 2.\nСортировка выбранного ряда.\n\n";
	std::cout << "Введите число ряда от 0 до 9 -> ";
	
	int n;
	std::cin >> n;
	std::sort(arr[n], arr[n] + cols);
			
	std::cout << "Массив с сортировкой строки " << n << '\n';
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j] << '\t';
		}
		std::cout << '\n';

	}









	return 0;
}