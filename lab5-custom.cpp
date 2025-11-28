#include <iostream>
#include<cmath>
#include <locale>
#include <vector>

int main() {
	int n, m;
	setlocale(LC_ALL, "rus");
	std::cout << "Проверка элементов столбца на нулевое значение\n";
	std::cout << "Кол-во столбцов: "; std::cin >> m;
	std::cout << "Кол-во строк: "; std::cin >> n;
	std::cout << "Заполните матрицу (граница строки обозначена -----)\n";
	std::vector<std::vector<double>> matrix(n, std::vector<double>(m, 0));
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			std::cin >> matrix[i][j];
		}
		std::cout << "-----\n";
	}
	std::cout << "\nВывод: ";
	std::vector<double> result(m, 0);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[j][i] != 0) result[i] = 1;
		}
		std::cout << result[i];
	}
	return 0;
}
