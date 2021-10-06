// Laboratory 3.4
// Штогрин Андрій
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
	if ((y <= (x-1)*(x-1) && y >= R) ||
		(y >= R && y <= (x ^ 2) + (y ^ 2) <= (R ^ 2)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
