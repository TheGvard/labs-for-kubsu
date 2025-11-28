#include <iostream>
#include<cmath>
#include <locale>

int main() {
	int n, m;
	setlocale(LC_ALL, "rus");
	std::cout << "Проверка элементов столбца на нулевое значение\n";
	std::cout << "Кол-во столбцов: "; std::cin >> m;
	std::cout << "Кол-во строк: "; std::cin >> n;
	std::cout << "Заполните матрицу (граница строки обозначена -----)\n";
	double** matrix = new double* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new double[m];
		for (int j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
		std::cout << "-----\n";
	}
	std::cout << "\nВывод: ";
	double* result = new double[m];
	for (int i = 0; i < m; i++) {
		result[i] = 0;
		for (int j = 0; j < n; j++) {
			if (matrix[j][i] != 0) result[i] = 1;
		}
		std::cout << result[i];
	}
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] result;
	return 0;
}
