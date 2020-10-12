// Lab_02.cpp
// < Chycherska Iryna >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 29
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m; // вхідний параметр
	double n; // вхідний параметр
	// double z1; // результат обчислення 1-го виразу
	 double z2; // результат обчислення 2-го виразу
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;

	//z1 = (((cos(m) - cos(n)) * (cos(m) - cos(n))) - ((sin(m) - sin(n)) * (sin(m) - sin(n))));
	 z2 = ((-4. * (sin((m - n) / 2.)) * (sin((m - n) / 2))) * cos(m + n));;
	cout << endl;
	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
