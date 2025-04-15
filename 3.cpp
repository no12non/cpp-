#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int first, second, sum;
	cout << "ВВедите два целых числа: \n";
	cin >> first >> second;
	sum = first + second;





    cout << first <<" + "<< second <<" = " << sum << endl;
	return 0;
}
