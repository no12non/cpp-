#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int divisor, dividend, quotient, remainder;
	cout << " :" << endl;
	cin >> dividend;

	cout << ":" << endl;
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;
	cout << sizeof(divisor) << " размер числа, Частное = " << quotient  << endl;
	cout << "Остаток = " << remainder << endl;
	int a;
	cout << "Size of int: " << sizeof(a) << " bytes." << std::endl;
	
	return 0;
}

// определяем размер при помощи функции sizeoff
