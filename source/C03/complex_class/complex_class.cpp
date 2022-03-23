#include <iostream>
#include <cmath>
#include "complex.h"

using namespace std;

complex z1, z2;

void input_and_calculate_2_complex()
{
	cin >> z1 >> z2;
	cout << "z1 + z2 = ";
	cout << z1 + z2 << "\n";
	cout << "z1 - z2 = ";
	cout << z1 - z2 << "\n";
	cout << "z1 * z2 = ";
	cout << z1 * z2 << "\n";
	cout << "z1 / z2 = ";
	cout << z1 / z2 << "\n";
}

int main()
{
	input_and_calculate_2_complex();
	return 0;
}