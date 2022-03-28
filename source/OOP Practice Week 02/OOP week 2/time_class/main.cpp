#include "Time.h"
#include <iostream>
#include <vector>

using namespace std;

vector<Time> T;

void input()
{
	int n;
	cin >> n;
	T.resize(n);
	for (int i = 0; i < n; ++i)
	{
		do
		{
			cout << "Nhap moc thoi gian thu " << i << ":\n";
			cin >> T[i];
		} while (!T[i].is_valid());
	}
}

void print1()
{
	for (int i = 0; i < T.size(); ++i)
	{
		if (T[i].is_leap_year())
			cout << T[i];
	}
}

void print2()
{
	long long added_second;
	cout << "Nhap so giay se cong them: ";
	cin >> added_second;
	for (int i = 0; i < T.size(); ++i)
	{
		T[i].add_second(added_second);
		cout << T[i] << "\n";
	}
}

int main()
{
	input();
	print1();
	print2();
	return 0;
}