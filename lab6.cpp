#include <iostream>
#include <locale>
#include <string>

int main() {
	setlocale(LC_ALL, "rus");
	std::string stroka;
	int record = 1, count = 1;
	std::cout << "Подсчет наибольшего коли-ва символов" << std::endl;
	std::cout << "Введите случайную комбинацию из 1 и 0" << std::endl;
	std::getline(std::cin, stroka);
	for (int i = 0; i < stroka.size() - 1; i++) {
		if (stroka[i] == stroka[i + 1]) {
			count++;
		}
		else {
			if (count > record) record = count;
			count = 1;
		}
	}
	std::cout << std::endl << "Наибольшая группа состоит из " << record << " символов";
}
