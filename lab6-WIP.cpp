#include <iostream>
#include <string>
#include <locale>
#include <cctype>
#include <vector>

struct bus {
	int routeNum;
	std::string type;
	std::string destination;
	int departureTime;
	int arrivalTime;
} maxBuses[100];

int main() {
	setlocale(LC_ALL, "rus");
	int busCount;
	std::cout << "Кол-во автобусов: "; std::cin >> busCount;
	for (int i = 0; i, busCount; i++) {
		std::cout << "Введите номер автобуса (отправьте пустое поле для завершения): ";
	};
	return 0;
}
