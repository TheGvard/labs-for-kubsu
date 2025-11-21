#include <iostream>
#include <vector>
#include<cmath>
#include <locale>

int main() {
	int n, m;
	setlocale(LC_ALL, "rus");
	std::cout << "Проверка элементов столбца на нулевое значение\n";
	std::cout << "Кол-во строк: "; std::cin >> n;
	std::cout << "Кол-во столбцов: "; std::cin >> m;
	std::cout << "Заполните матрицу (граница строки обозначена -----)";
	double **matrix = new double* [n];
	for (int j = 0; j < m; j++) {
		matrix[j] = new double[m];
		for (int i = 0; i < n; i++) {
			std::cin >> matrix[i][j];
		}
		std::cout << "-----";
	}

	double* result = new double[m];
	for int j = 0; j < n; j++) {
		result[i] = 0;
		for (int i = 0; i < m; i++)({
			if (matrix[i][j] == 0) {
				result[i] = 1;
			}
		}
		std::cout << result[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] result;
	return 0;
}
