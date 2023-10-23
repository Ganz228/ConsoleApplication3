#include <iostream>
#include <cmath> 
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	double x;
	double y;
	double a;

	cout << "Введите x\n ";
	cin >> x;

	cout << "ВВедите y\n ";
	cin >> y;

	cout << x << endl;
	cout << y << endl;

	a = (14 * sin(x) + pow(y, 2)) / (0.92 * pow(cos(x), 3));

	cout << "Результат вычеслений =";
	cout << a << endl;

	system("pause");
}
	



