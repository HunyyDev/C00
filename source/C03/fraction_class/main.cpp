#include <iostream>
#include "fraction.h"
#include <vector>

using namespace std;

vector<fract> arr;

void input_2_fraction()
{
	fract A, B;
	cin >> A >> B;
	if (A.HopThucHoa()==false)
	{
		cout << "Error: Denominator can't be zero";
		return;
	}
	if (B.HopThucHoa()==false)
	{
		cout << "Error: Denominator can't be zero";
		return;
	}
	cout << "A + B = ";
	cout << A + B << "\n";
	cout << "A - B = ";
	cout << A - B << "\n";
	cout << "A * B = ";
	cout << A * B << "\n";
	cout << "A / B = ";
	cout << A / B << "\n";
}

void input_list_of_fractions()
{
	int n;
	cout << "Nhap so luong phan so n: ";
	cin >> n;
	while (n--)
	{
		fract t;
		cin >> t;
		if (t.GetMau() == 0)
		{
			continue;
		}
		else
		{
			arr.push_back(t);
		}
	}
}

int main()
{
	input_2_fraction();
	input_list_of_fractions();
	return 0;
}