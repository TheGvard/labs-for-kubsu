#include <iostream>
#include <vector>
#include<cmath>
#include <locale>

int main() {
	// вектора имеют встроенный деструктор, могут изменяться в рантайме и поддерживают кучу функций и вообще удобнее в написании
	int n, m;
	setlocale(LC_ALL, "rus");
	std::cout << "Проверка элементов столбца на нулевое значение\n";
	std::cout << "Кол-во строк: "; std::cin >> n;
	std::cout << "Кол-во столбцов: "; std::cin >> m;
	std::cout << "Заполните матрицу (граница строки обозначена -----)";
	std::vector<std::vector<double>> matrix(n, std::vector<double>(m, 0));
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			std::cin >> matrix[i][j];
		}
		std::cout << "-----";
	}
	std::vector<double> result(m, 0);
	std::cout << "\n";
	for (int j = 0; j < n; j++) {;
		for (int i = 0; i < m; i++) {
			if (matrix[i][j] == 0) {
				result[j] = 1;
			}
		}
		std::cout << result[j] << " ";
	}
	return 0;
}
