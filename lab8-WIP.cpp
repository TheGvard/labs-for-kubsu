#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>

typedef double (*uf)(double, double, int&);

void table(double, double, double, double, uf) {
	double y(double, double, int&);
	double s(double, double, int&);
}

double yx(double x, double eps, int &k) {
	return 0.5 * log((1 + x) / (1 - x));
}

double sx(double x, double eps, int &k) {
	double s = 0, iteration;
	for (int i = 1; i < k; i++) {
		iteration = pow(x, 2 * k + 1) / (2 * k + 1);
		s += iteration;
	}
	return s;
}

int main() {
	setlocale(LC_ALL, "rus");
	double a, b, x, k, eps;
	std::cout << "a :";  std::cin >> a;
	std::cout << "b: ";  std::cin >> b;
	std::cout << "k: ";  std::cin >> k;
	std::cout << "Точность: ";  std::cin >> eps;
	std::cout << std::setw(8) << "x" << std::setw(15) << "y(x)" << std::setw(10) << "k" << std::endl;
	table(a, b, k, eps, y);
	std::cout << std::setw(8) << "x" << std::setw(15) << "s(x)" << std::setw(10) << "k" << std::endl;
	table(a, b, k, eps, s);
	return 0;
}
