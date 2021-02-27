#include <iostream>
#include <Windows.h>
#include "Square.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Square A;
	A.Read();
	A.Display();
	A.Lenght();
	A.Area();
	A.Perimeter();
}