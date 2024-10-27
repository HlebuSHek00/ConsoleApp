
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	system("chcp 1251>nul");
//	int ras;
//	cout << ("Введите расстояние в метрах: ") << endl;
//	cin >> ras;
//	cout << ("Расстояние в меттрах: ") << ras << endl;
//	cout << ("Distance in centimeters: ")<< ras * 100<< endl;
//	return 0;
//
//}
// 
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	int km, m;
	cout << ("Введите расстояние в километрах: ") << endl;
	cin >> km;
	cout << ("Введите расстояние в метрах: ") << endl;
	cin >> m;
	cout << ("Расстояние в километрах: ") << km << endl;
	cout << ("Расстояние в метрах: ") << m << endl;
	if ((km*100) > m) {
		cout << ("Наименьшее растояние - расстояние в метрах: ") << m << endl;
	}
	else if ((km*100) < m) {
		cout << ("Наименьшее расстояние - расстояние в километрах: ") << km << endl;
	}
	else if ((km*100) == m) 
	{
		cout << ("Расстояния одинаковы");
	}
	return 0;
}