
#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int divisor, dividend, quotient, remainder;
	cout << " :";
	cin >> dividend;

	cout << ":";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;
	cout << "Частное = " << quotient << endl;
	cout << "Остаток = " << remainder << endl;
	
	
	return 0;
}

// частное и остаток при делении в с++
// тут я понял зачем нужен % и что он дает
