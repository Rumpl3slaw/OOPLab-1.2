#include <iostream>
#include <Windows.h>
#include <math.h>
#include "Square.h"

using namespace std;

bool Square::Init(double x_x1, double x_x2, double y_y1, double y_y2)
{
	bool tmp;

	if (x_x1 == y_y1 && x_x2 == y_y2)
	{
		x1 = x_x1;
		x2 = x_x2;
		y1 = y_y1;
		y2 = y_y2;
		tmp = true;
	}
	else
		tmp = false;
	return tmp;
}
void Square::Read()
{
	double x1, x2,  y1,  y2;
	do {
		cout << "Введіть x1 = ";cin >> x1;
		cout << "Введіть x2 = ";cin >> x2;
		cout << "Введіть y1 = ";cin >> y1;
		cout << "Введіть y2 = ";cin >> y2;
	} while (!Init(x1, x2, y1, y2));
}
void Square::Display()
{
	cout << "x1 =" << Getx1() << endl;
	cout << "x2 =" << Getx2() << endl;
	cout << "y1 =" << Gety1() << endl;
	cout << "y2 =" << Gety2() << endl;
}
double Square::Lenght()
{
	double L = abs(x2 - x1);
	cout << "Довжина сторони квадрата = " <<L<< endl;
	return L;
}
double Square::Area()
{
	double L = abs(x2 - x1);
	int S = pow(L, 2);
	cout << "Площа квадрата = " << S << endl;
	return S;
}
double Square::Perimeter()
{
	double L = abs(x2 - x1);
	int P = 4 * L;
	cout << "Периметр квадрата = " << P << endl;
	return P;
}

