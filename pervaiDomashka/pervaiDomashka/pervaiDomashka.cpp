// pervaiDomashka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	system("chcp 1251>nul");
	double radius;
	cout << ("Введите радиус окружности: ");
	cin >> radius;
	cout << ("Диаметр окружности равен: ") << radius * 2 << endl;
	system("pause>nul");
	return 0;
}



